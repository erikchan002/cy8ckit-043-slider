#include <stdbool.h>
#include <project.h>

#define NUMBER_OF_SENSORS CapSense_TOTAL_CSD_SENSORS
#define BUFFER_SIZE (NUMBER_OF_SENSORS+7)/8

void initI2C(uint8_t buffer_size, uint8_t buffer[BUFFER_SIZE]);
void initCapSense();
void updateCapSense();
bool readTouches(bool touches[NUMBER_OF_SENSORS]);
void sendTouches(bool touches[NUMBER_OF_SENSORS], uint8_t buffer[BUFFER_SIZE]);

uint8_t buffer[BUFFER_SIZE];

int main() {
    bool touches[NUMBER_OF_SENSORS];
    
    CyGlobalIntEnable;      /* Enable global interrupts */
    
    initI2C(BUFFER_SIZE, buffer);
    initCapSense();
    while(true) {
        if(!CapSense_IsBusy()) {
            if(readTouches(touches)){
                sendTouches(touches, buffer);
            }
            updateCapSense();
        }
    }
}

void initI2C(uint8_t buffer_size, uint8_t buffer[BUFFER_SIZE]) {
    EZI2C_Start();
    EZI2C_EzI2CSetBuffer1(buffer_size, 0, buffer);
}

void initCapSense() {
    EZI2C_Start();
    EZI2C_EzI2CSetBuffer2(sizeof(CapSense_dsRam),sizeof(CapSense_dsRam),(uint8_t *)&(CapSense_dsRam));
    CapSense_Start();
    CapSense_InitializeAllBaselines();
}

void updateCapSense() {
    // CapSense_UpdateAllBaselines();
    CapSense_ProcessAllWidgets();
    CapSense_RunTuner();
    CapSense_ScanAllWidgets();
}

bool readTouches(bool touches[NUMBER_OF_SENSORS]){
    bool changed = false;
    uint8_t i;
    for(i = 0; i < NUMBER_OF_SENSORS; ++i){
        bool status = CapSense_IsSensorActive(0, i);
        if(touches[i]!=status){
            touches[i]=status;
            changed = true;
        }
    }
    return changed;
}

void sendTouches(bool touches[NUMBER_OF_SENSORS], uint8_t buffer[BUFFER_SIZE]){
    uint8_t i;
    for(i = 0; i < BUFFER_SIZE; ++i){
        buffer[i] = 0;
    }
    for(i = 0; i < NUMBER_OF_SENSORS; ++i) {
        if(touches[i]){
            buffer[i/8] |= (1 << (i%8));
        }
    }
}
