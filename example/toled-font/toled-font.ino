// toled-font.ino - printing text on the OLED
#include <Wire.h>
#include <toled.h>


void boxes() {
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
    // Footer texts
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


void wrap() {
  toled_clear();
    // For long text use small fontc:\Users\M.Pennings\Documents\Arduino\libraries\toled\src\sans5.cpp
    toled_cursor(2,2);
    toled_font(toled_font_sans8, TOLED_COL_WHITE, 1, 2); // margin 2 to fit frame
    toled_str("A longer text to show that the driver does support wrap around.");
    // Frame it
    toled_openrect(0, 0, 127, 31 );
  toled_commit();
}


void mono5() {
  toled_clear();
    toled_font(toled_font_mono5); 
    toled_cursor(0, 0); toled_str(" !\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~");
  toled_commit();
}


void sans5() {
  toled_clear();
    toled_font(toled_font_sans5); 
    toled_cursor(0, 0); toled_str(" !\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~");
  toled_commit();
}


void sans8() {
  toled_clear();
    toled_font(toled_font_sans8); 
    toled_cursor(0, 0); toled_str(" !\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_");
  toled_commit();
  delay(3000);
  toled_clear();
    toled_cursor(0, 0); toled_str("`abcdefghijklmnopqrstuvwxyz{|}~");
  toled_commit();
}


void sans10() {
  toled_clear();
    toled_font(toled_font_sans10); 
    toled_cursor(0, 0); toled_str(" !\"#$%&'()*+,-./0123456789:;<=>?@ABCDEF");
  toled_commit();
  delay(3000);
  toled_clear();
    toled_cursor(0, 0); toled_str("GHIJKLMNOPQRSTUVWXYZ[\\]^_");
  toled_commit();
  delay(3000);
  toled_clear();
    toled_cursor(0, 0); toled_str("`abcdefghijklmnopqrstuvwxyz{|}~");
  toled_commit();
}


void sans12() {
  toled_clear();
    toled_font(toled_font_sans12); 
    toled_cursor(0, 0); toled_str(" !\"#$%&'()*+,-./0123456789:;<=>?@AB");
  toled_commit();
  delay(3000);
  toled_clear();
    toled_cursor(0, 0); toled_str("CDEFGHIJKLMNOPQRSTUVWXYZ");
  toled_commit();
  delay(3000);
  toled_clear();
    toled_cursor(0, 0); toled_str("[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~");
  toled_commit();
}


void setup() {
  Serial.begin(115200);
  Serial.printf("Welcome to tiny OLED (toled-font.ino)\n");

  Wire.begin(8,18,1000000); // SDA, SCL, freq
  toled_init();
  Serial.printf("\n");
}


void loop() {
  boxes();
  delay(3000);
  wrap();
  delay(3000);

  mono5();
  delay(3000);
  sans5();
  delay(3000);
  sans8();
  delay(3000);
  sans10();
  delay(3000);
  sans12();
  delay(3000);
  // skipped sans14

}

