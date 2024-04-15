# Tiny OLED (toled)

Tiny OLED driver (only 128x32, only I2C, only for ESP32)


## Introduction

The aim of this driver is to use few source files, not to be portable.
It is restructed to
- OLEDs of 128×32
- OLEDs using I2C
- I2C is hardwired to 1MHz which is out-of-spec for standard i2C devices.
  If there are other I2C devices to the bus they will not work.
- I2C pads are hardwired in the library (pins 8 and 18)
- Written for ESP32S3


## Notes

- Coordinates are from (0,0)-(127,31).
- Endpoint (of lines, rectangles) are inclusive, so (0,0)-(127,31) fills entire screen.


## Text

- Version 0.3.0 and later supports text using 4 font sizes.
- There is no wrap-around protection for (long) strings.

![text](extra/toled-font.jpg)

(end)
