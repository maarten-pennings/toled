// toled-speed.ino - Timing drawing and communication
#include <Wire.h>
#include <toled.h>


void time(uint32_t speed, const char * msg ) {
  Wire.setClock(speed); 

  uint32_t t0=micros();
    toled_clear();
    toled_fillrect(2,2, 125,29);
  uint32_t t1=micros();
    toled_commit();
  uint32_t t2=micros();

  Serial.printf("| freq %7u Hz | draw %2u us | comm %5u us | tot %5u us | fps %3d | %s\n",speed, t1-t0, t2-t1, t2-t0, 1000000/(t2-t1), msg);
}


void setup() {
  Serial.begin(115200);
  Serial.printf("Welcome to tiny OLED (toled-speed.ino)\n");

  Wire.begin(8,18,1000000); // SDA, SCL, freq
  toled_init();
  Serial.printf("\n");

  time( 100*1000, "I2C standard-mode");
  time( 200*1000, "");
  time( 400*1000, "I2C fast-mode");
  time( 600*1000, "");
  time( 800*1000, "");
  time(1000*1000, "Suspect library clips higher frequencies");
  time(1200*1000, "");
  time(1400*1000, "");
}


void loop() {
  delay(5000);
}


// On ESP32S3 with various OLED_I2C_FREQ
//
// | freq  100000 Hz | draw 55 us | comm 48339 us | tot 48394 us | fps  20 | I2C standard-mode
// | freq  200000 Hz | draw 44 us | comm 24343 us | tot 24387 us | fps  41 | 
// | freq  400000 Hz | draw 43 us | comm 12410 us | tot 12453 us | fps  80 | I2C fast-mode
// | freq  600000 Hz | draw 43 us | comm  8345 us | tot  8388 us | fps 119 | 
// | freq  800000 Hz | draw 43 us | comm  6917 us | tot  6960 us | fps 144 | 
// | freq 1000000 Hz | draw 43 us | comm  5979 us | tot  6022 us | fps 167 | Suspect library clips higher frequencies
// | freq 1200000 Hz | draw 43 us | comm  5974 us | tot  6017 us | fps 167 | 
// | freq 1400000 Hz | draw 43 us | comm  5972 us | tot  6015 us | fps 167 | 

