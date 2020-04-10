./uf2conv.py ./.pio/build/nrf52840_dk/firmware.bin -c -b 0x026000 -f 0xADA52840

exit

https://github.com/adafruit/Adafruit_nRF52_Bootloader
To create your own UF2 DFU update image, simply use the Python conversion script on a .bin file or .hex file, specifying the family as 0xADA52840. If using a .bin file with the conversion script you must specify application address with the -b switch, this address depend on the SoftDevice size/version e.g S140 v6 is 0x26000
