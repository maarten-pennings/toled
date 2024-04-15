# Tiny OLED (toled)

Tiny OLED driver.


## Introduction

The aim of this driver is to use few source files, not to be portable.
It is intended for

- OLEDs with a resolution of 128×32.
- OLEDs using I2C communication.
- Written for ESP32S3

The user of the library has to configure I2C pins and speed.
Note the OLED supports clocks up to 1MHz, but other I2C devices on the same bus might not. 

```c++
  Wire.begin(8,18,1000000); // SDA, SCL, freq
  toled_init();
```


## Notes

- Coordinates are from (0,0)-(127,31).
- Endpoint (of lines, rectangles) are inclusive, so (0,0)-(127,31) fills entire screen.


## Text

- Version 0.3.0 and later supports text using 4 font sizes.
- There is no wrap-around protection for (long) strings.

![text](extra/toled-font.jpg)

(end)
