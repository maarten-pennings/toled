// toled-lines.ino - Example drawing lines and rectangles in three colors
#include <Wire.h>
#include <toled.h>


// Example drawing a cross using toled_pixel()
void cross() {
  // Clear framebuffer
  toled_clear();

  // Mark four corners
  for( int d=0; d<8; d++ ) {
    toled_pixel(    d,    0);
    toled_pixel(    0,    d);

    toled_pixel(    d,   31);
    toled_pixel(  127,    d);

    toled_pixel(127-d,   31);
    toled_pixel(  127, 31-d);

    toled_pixel(127-d,    0);
    toled_pixel(    0, 31-d);
  }

  // Vertical ruler
  for( int y=0; y<32; y++ ) {
    if( y%16==0 ) toled_pixel(60, y);
    if( y% 8==0 ) toled_pixel(61, y);
    if( y% 4==0 ) toled_pixel(62, y);
    toled_pixel(63, y);
    toled_pixel(64, y);
    if( y% 4==0 ) toled_pixel(65, y);
    if( y% 8==0 ) toled_pixel(66, y);
    if( y%16==0 ) toled_pixel(67, y);
  }

  // Horizontal ruler
  for( int x=0; x<128; x++ ) {
    if( x%16==0 ) toled_pixel(x, 12);
    if( x% 8==0 ) toled_pixel(x, 13);
    if( x% 4==0 ) toled_pixel(x, 14);
    toled_pixel(x, 15);
    toled_pixel(x, 16);
    if( x% 4==0 ) toled_pixel(x, 17);
    if( x% 8==0 ) toled_pixel(x, 18);
    if( x%16==0 ) toled_pixel(x, 19);
  }

  // Send frame buffer to OLED
  toled_commit();
}


// Example drawing rectangles using toled_verline(), toled_horline(), toled_fillrect(), toled_openrect().
void rects() {
  toled_clear();

  // Outer lines without the corners
  toled_verline(0,1,30);
  toled_horline(1,126,0);
  toled_horline(1,126,31);
  toled_verline(127,1,30);

  // Inner rectangle in color 'white' (on)
  toled_fillrect(2,2, 125,29);

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
