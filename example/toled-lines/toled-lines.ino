// toled-lines.ino - Example drawing lines and rectangles in three colors
#include <Wire.h>
#include <toled.h>


// Example drawing a cross using toled_pixel()
void cross() {
  // Clear framebuffer
  toled_clear();

  // Mark four corners
  for( int d=0; d<8; d++ ) {
    toled_pixel(    d,    0, TOLED_COL_WHITE);
    toled_pixel(    0,    d, TOLED_COL_WHITE);

    toled_pixel(    d,   31, TOLED_COL_WHITE);
    toled_pixel(  127,    d, TOLED_COL_WHITE);

    toled_pixel(127-d,   31, TOLED_COL_WHITE);
    toled_pixel(  127, 31-d, TOLED_COL_WHITE);

    toled_pixel(127-d,    0, TOLED_COL_WHITE);
    toled_pixel(    0, 31-d, TOLED_COL_WHITE);
  }

  // Vertical ruler
  for( int y=0; y<32; y++ ) {
    if( y%16==0 ) toled_pixel(60, y, TOLED_COL_WHITE);
    if( y% 8==0 ) toled_pixel(61, y, TOLED_COL_WHITE);
    if( y% 4==0 ) toled_pixel(62, y, TOLED_COL_WHITE);
    toled_pixel(63, y, TOLED_COL_WHITE);
    toled_pixel(64, y, TOLED_COL_WHITE);
    if( y% 4==0 ) toled_pixel(65, y, TOLED_COL_WHITE);
    if( y% 8==0 ) toled_pixel(66, y, TOLED_COL_WHITE);
    if( y%16==0 ) toled_pixel(67, y, TOLED_COL_WHITE);
  }

  // Horizontal ruler
  for( int x=0; x<128; x++ ) {
    if( x%16==0 ) toled_pixel(x, 12, TOLED_COL_WHITE);
    if( x% 8==0 ) toled_pixel(x, 13, TOLED_COL_WHITE);
    if( x% 4==0 ) toled_pixel(x, 14, TOLED_COL_WHITE);
    toled_pixel(x, 15, TOLED_COL_WHITE);
    toled_pixel(x, 16, TOLED_COL_WHITE);
    if( x% 4==0 ) toled_pixel(x, 17, TOLED_COL_WHITE);
    if( x% 8==0 ) toled_pixel(x, 18, TOLED_COL_WHITE);
    if( x%16==0 ) toled_pixel(x, 19, TOLED_COL_WHITE);
  }

  // Send framebuffer to OLED
  toled_commit();
}


// Example drawing rectangles using toled_verline(), toled_horline(), toled_fillrect(), toled_openrect().
void rects() {
  toled_clear();

  // Outer lines without the corners
  toled_verline(0,1,30,TOLED_COL_WHITE);
  toled_horline(1,126,0,TOLED_COL_WHITE);
  toled_horline(1,126,31,TOLED_COL_WHITE);
  toled_verline(127,1,30,TOLED_COL_WHITE);

  // Inner rectangle in color 'white' (on)
  toled_fillrect(2,2, 125,29, TOLED_COL_WHITE);

  // Draw rectangle in color 'black' (off)
  int sa=20; int ma=(32-sa)/2; int oa=0;
  toled_fillrect(oa+ma,ma, oa+31-ma,31-ma, TOLED_COL_BLACK);

  // Draw smaller open rectangle in color 'flip' (invert pixels)
  int sb=12; int mb=(32-sb)/2; int ob=oa+31-ma-sb/2;
  toled_openrect(ob,0+mb, ob+sb,31-mb, TOLED_COL_FLIP);

  toled_commit();
}


void setup() {
  Serial.begin(115200);
  Serial.printf("Welcome to tiny OLED (toled-lines.ino)\n");

  Wire.begin(8,18,1000*1000); // SDA, SCL, freq
  toled_init();
}


void loop() {
  cross();
  delay(2000);
  rects();
  delay(2000);
}
