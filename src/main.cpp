#include <Arduino.h>
//#include <BLEPeripheral.h>

/*
per
https://docs.platformio.org/en/latest/tutorials/nordicnrf52/arduino_debugging_unit_testing.html

ardunino github is here https://github.com/sandeepmistry/arduino-nRF5
devboard hw docs here:
https://infocenter.nordicsemi.com/topic/ug_nrf52840_dk/UG/nrf52840_DK/hw_buttons_leds.html?cp=4_0_4_7_6

https://docs.platformio.org/en/latest/boards/nordicnrf52/nrf52840_dk_adafruit.html

must install adafruit bootloader first!
https://learn.adafruit.com/circuitpython-on-the-nrf52/nrf52840-bootloader
see link above and turn off jlink filesystem if we see unreliable serial comms
over USBCDC

adafruit bootloader install commands (from their readme)
kevinh@kevin-server:~/.platformio/packages/framework-arduinoadafruitnrf52/bootloader$
nrfjprog -e -f nrf52 Erasing user available code and UICR flash areas. Applying
system reset.
kevinh@kevin-server:~/.platformio/packages/framework-arduinoadafruitnrf52/bootloader$
nrfjprog --program pca10056/pca10056_bootloader-0.3.2_s140_6.1.1.hex -f nrf52
Parsing hex file.
Reading flash area to program to guarantee it is erased.
Checking that the area to write is not protected.
Programming device.
kevinh@kevin-server:~/.platformio/packages/framework-arduinoadafruitnrf52/bootloader$
nrfjprog --reset -f nrf52 Applying system reset. Run.

install jlink tools from here:
https://www.segger.com/downloads/jlink#J-LinkSoftwareAndDocumentationPack

install nrf tools from here:
https://www.nordicsemi.com/Software-and-tools/Development-Tools/nRF-Command-Line-Tools/Download#infotabs


*/

// See g_ADigitalPinMap to see how arduino maps to the real gpio#s - and all in
// P0
#define LED1 14
#define LED2 13

/*
BLEPeripheral ledPeripheral = BLEPeripheral();

BLEService ledService = BLEService("19b10000e8f2537e4f6cd104768a1214");
BLECharCharacteristic ledCharacteristic = BLECharCharacteristic(
    "19b10001e8f2537e4f6cd104768a1214", BLERead | BLEWrite);
*/

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);

  /*
    ledPeripheral.setAdvertisedServiceUuid(ledService.uuid());
    ledPeripheral.addAttribute(ledService);
    ledPeripheral.addAttribute(ledCharacteristic);
    ledPeripheral.setLocalName("Nordic NRF52 DK");
    ledPeripheral.begin(); */
}

void loop() {
  digitalWrite(LED1, HIGH);
  delay(1000);
  digitalWrite(LED1, LOW);
  delay(1000);

  /*
    BLECentral central = ledPeripheral.central();

    if (central) {
      while (central.connected()) {
        if (ledCharacteristic.written()) {
          if (ledCharacteristic.value()) {
            digitalWrite(LED_BUILTIN, HIGH);
          } else {
            digitalWrite(LED_BUILTIN, LOW);
          }
        }
      }
    } */
}