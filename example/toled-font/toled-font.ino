// toled-font.ino - printing text on the OLED
#include <Wire.h>
#include <toled.h>


void setup() {
  Serial.begin(115200);
  Serial.printf("Welcome to tiny OLED (toled-font.ino)\n");

  Wire.begin(8,18,1000000); // SDA, SCL, freq
  toled_init();
  Serial.printf("\n");

  toled_clear();

  // Main text
  toled_cursor(2,0);
  toled_font(toled_font_sans14 );
  toled_str("Tiny OLED",128);

  // Main label
  toled_font(toled_font_sans5 );
  toled_cursor(1,0);
  toled_str("1");

  // Footer boxes
  toled_fillrect(0, 20, 62, 31 );
  toled_fillrect(64, 20, 127, 31 );

  // Footer text
  toled_font(toled_font_sans8, TOLED_COL_BLACK );

  toled_cursor(0,21);
  toled_str("example", 64);

  toled_cursor(64,21);
  toled_str("ver " TOLED_VERSION,64);

  // Footer labels
  toled_font(toled_font_sans5, TOLED_COL_BLACK );

  toled_cursor(1,21);
  toled_str("2");

  toled_cursor(65,21);
  toled_str("3");

  toled_commit();
}


void loop() {
  delay(5000);
}

