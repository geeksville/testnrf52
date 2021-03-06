#include <Arduino.h>

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

examples of turning off the loop call to save power:
https://learn.adafruit.com/bluefruit-nrf52-feather-learning-guide/advertising-beacon

example of a more complex BLE service:
https://learn.adafruit.com/bluefruit-nrf52-feather-learning-guide/custom-hrm
*/

// See g_ADigitalPinMap to see how arduino maps to the real gpio#s - and all in
// P0
#define LED1 14
#define LED2 13

/*
good led ble demo:
https://github.com/adafruit/Adafruit_nRF52_Arduino/blob/master/libraries/Bluefruit52Lib/examples/Peripheral/nrf_blinky/nrf_blinky.ino
*/

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);

  Serial.begin(115200);
  Serial.println("Hello world");
}

void loop() {
  digitalWrite(LED1, HIGH);
  delay(200);
  digitalWrite(LED1, LOW);
  delay(200);
  Serial.println("X");
}