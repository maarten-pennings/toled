// toled.h - Tiny OLED driver (only 128x32, only I2C, only for ESP32)
#ifndef _TOLED_H_
#define _TOLED_H_


#include <stdint.h>


#define TOLED_VERSION  "0.2.0"


#define TOLED_WIDTH    128
#define TOLED_HEIGHT    32


#define TOLED_COL_BLACK 0   // Draw black pixels (off)
#define TOLED_COL_WHITE 1   // Draw white pixels (on)
#define TOLED_COL_FLIP  2   // Draw pixels by inverting


void toled_init(void);
void toled_clear(void);
void toled_commit(void);
void toled_pixel(int x, int y, int col);
void toled_verline(int x, int y0, int y1, int col );
void toled_horline(int x0, int x1, int y, int col );
void toled_fillrect(int x0, int y0, int x1, int y1, int col );
void toled_openrect(int x0, int y0, int x1, int y1, int col );


#endif
