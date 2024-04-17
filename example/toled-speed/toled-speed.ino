// toled-speed.ino - Timing drawing and communication
#include <Wire.h>
#include <toled.h>


void time1(uint32_t speed, const char * msg ) {
  Wire.setClock(speed); 

  uint32_t t0=micros();
    toled_clear();
    toled_fillrect(2,2, 125,29);
  uint32_t t1=micros();
    toled_commit();
  uint32_t t2=micros();

  Serial.printf("| freq %7u Hz | draw %2u us | comm %5u us | tot %5u us | fps %3d | %s\n",speed, t1-t0, t2-t1, t2-t0, 1000000/(t2-t1), msg);
}


void time2(uint32_t speed, const char * msg ) {
  Wire.setClock(speed); 

  uint32_t t0=micros();
    toled_clear();
    toled_cursor(0,0); toled_font(toled_font_sans14 ); toled_str("Tiny OLED",128);
    toled_cursor(0,21);toled_font(toled_font_sans5 ); toled_str("ABCDEFGHIJKLMNOPQRSTUVWXY");
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

  Serial.printf("Fillrect\n");
  time1( 100*1000, "I2C standard-mode");
  time1( 200*1000, "");
  time1( 400*1000, "I2C fast-mode");
  time1( 600*1000, "");
  time1( 800*1000, "");
  time1(1000*1000, "Suspect library clips higher frequencies");
  time1(1200*1000, "");
  time1(1400*1000, "");
  time1(1700*1000, "");
  time1(2000*1000, "");
  time1(2500*1000, "");
  time1(3000*1000, "");

  Serial.printf("Text\n");
  time2( 100*1000, "I2C standard-mode");
  time2( 200*1000, "");
  time2( 400*1000, "I2C fast-mode");
  time2( 600*1000, "");
  time2( 800*1000, "");
  time2(1000*1000, "Suspect library clips higher frequencies");
  time2(1200*1000, "");
  time2(1400*1000, "");
  time2(1700*1000, "");
  time2(2000*1000, "");
  time2(2500*1000, "");
  time2(3000*1000, "");
}


void loop() {
  delay(5000);
}


// On ESP32S3 with various OLED_I2C_FREQ

// Fillrect
// | freq  100000 Hz | draw 56 us | comm 48335 us | tot 48391 us | fps  20 | I2C standard-mode
// | freq  200000 Hz | draw 43 us | comm 24345 us | tot 24388 us | fps  41 | 
// | freq  400000 Hz | draw 44 us | comm 12410 us | tot 12454 us | fps  80 | I2C fast-mode
// | freq  600000 Hz | draw 43 us | comm  8348 us | tot  8391 us | fps 119 | 
// | freq  800000 Hz | draw 44 us | comm  6916 us | tot  6960 us | fps 144 | 
// | freq 1000000 Hz | draw 43 us | comm  5977 us | tot  6020 us | fps 167 | Suspect library clips higher frequencies
// | freq 1200000 Hz | draw 44 us | comm  5974 us | tot  6018 us | fps 167 | 
// | freq 1400000 Hz | draw 43 us | comm  5973 us | tot  6016 us | fps 167 | 
// | freq 1700000 Hz | draw 45 us | comm  5981 us | tot  6026 us | fps 167 | 
// | freq 2000000 Hz | draw 43 us | comm  5973 us | tot  6016 us | fps 167 | 
// | freq 2500000 Hz | draw 45 us | comm  5971 us | tot  6016 us | fps 167 | 
// | freq 3000000 Hz | draw 43 us | comm  5981 us | tot  6024 us | fps 167 | 
// Text
// | freq  100000 Hz | draw 389 us | comm 48329 us | tot 48718 us | fps  20 | I2C standard-mode
// | freq  200000 Hz | draw 336 us | comm 24351 us | tot 24687 us | fps  41 | 
// | freq  400000 Hz | draw 334 us | comm 12410 us | tot 12744 us | fps  80 | I2C fast-mode
// | freq  600000 Hz | draw 331 us | comm  8345 us | tot  8676 us | fps 119 | 
// | freq  800000 Hz | draw 340 us | comm  6917 us | tot  7257 us | fps 144 | 
// | freq 1000000 Hz | draw 335 us | comm  5981 us | tot  6316 us | fps 167 | Suspect library clips higher frequencies
// | freq 1200000 Hz | draw 337 us | comm  5976 us | tot  6313 us | fps 167 | 
// | freq 1400000 Hz | draw 332 us | comm  5981 us | tot  6313 us | fps 167 | 
// | freq 1700000 Hz | draw 333 us | comm  5982 us | tot  6315 us | fps 167 | 
// | freq 2000000 Hz | draw 336 us | comm  5972 us | tot  6308 us | fps 167 | 
// | freq 2500000 Hz | draw 334 us | comm  5973 us | tot  6307 us | fps 167 | 
// | freq 3000000 Hz | draw 336 us | comm  5982 us | tot  6318 us | fps 167 | 

