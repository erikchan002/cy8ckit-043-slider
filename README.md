# cy8ckit-043-slider
## CY8CKIT-043
https://www.cypress.com/documentation/development-kitsboards/cy8ckit-043-psoc-4-m-series-prototyping-kit

## I2C
- Use pin `4.0` for `SCL`, `4.1` for `SDA`
- Main address `0x08`, `400kHz`
- Sensor status (on/off) readable as bits of each byte
- CapSensor Tuner debugging communication set at address `0x09`

## Debug
1. Plug your CY8CKIT-043 in
2. In PSoC Creator, open `TopDesign.cysh`
3. Right click CapSense, select Launch Tuner
4. Press F10 after Tuner launched
5. Select `KitProg/.......- I2C`
6. `I2C address: 9` `Sub-address: 2-Bytes` `I2C Speed: 400kHz` Press OK
7. From the top left of Tuner press `Connect` and then `Start`
8. From the left of Tuner in Widget Explorer press `Check all`
9. Touch the pins to see the capacitive touch signals
