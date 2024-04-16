// sans5.cpp - Bitmap data for a font: 6 pixel high (A=5px,x=4px), variable width, sans serif


#include <stdint.h>


static const uint8_t toled_sans5_bmp[] = {
  
  // @0 ' ' (4 pixels wide)
  0x00, //
  0x00, //
  0x00, //
  0x00, //
  0x00, //
  0x00, //

  // @6 '!' (1 pixels wide)
  0x80, // #
  0x80, // #
  0x80, // #
  0x00, //
  0x80, // #
  0x00, //

  // @12 '"' (3 pixels wide)
  0xA0, // # #
  0xA0, // # #
  0x00, //
  0x00, //
  0x00, //
  0x00, //

  // @18 '#' (5 pixels wide)
  0x50, //  # #
  0xF8, // #####
  0x50, //  # #
  0xF8, // #####
  0x50, //  # #
  0x00, //

  // @24 '$' (5 pixels wide)
  0x70, //  ###
  0xA0, // # #
  0x70, //  ###
  0x28, //   # #
  0x70, //  ###
  0x00, //

  // @30 '%' (5 pixels wide)
  0xC8, // ##  #
  0xD0, // ## #
  0x20, //   #
  0x58, //  # ##
  0x98, // #  ##
  0x00, //

  // @36 '&' (6 pixels wide)
  0x30, //   ##
  0x48, //  #  #
  0x70, //  ###
  0x88, // #   #
  0x74, //  ### #
  0x00, //

  // @42 ''' (1 pixels wide)
  0x80, // #
  0x80, // #
  0x00, //
  0x00, //
  0x00, //
  0x00, //

  // @48 '(' (2 pixels wide)
  0x40, //  #
  0x80, // #
  0x80, // #
  0x80, // #
  0x80, // #
  0x40, //  #

  // @54 ')' (2 pixels wide)
  0x80, // #
  0x40, //  #
  0x40, //  #
  0x40, //  #
  0x40, //  #
  0x80, // #

  // @60 '*' (3 pixels wide)
  0x40, //  #
  0xE0, // ###
  0x40, //  #
  0xA0, // # #
  0x00, //
  0x00, //

  // @66 '+' (3 pixels wide)
  0x00, //
  0x00, //
  0x40, //  #
  0xE0, // ###
  0x40, //  #
  0x00, //

  // @72 ',' (1 pixels wide)
  0x00, //
  0x00, //
  0x00, //
  0x00, //
  0x80, // #
  0x80, // #

  // @78 '-' (3 pixels wide)
  0x00, //
  0x00, //
  0x00, //
  0xE0, // ###
  0x00, //
  0x00, //

  // @84 '.' (1 pixels wide)
  0x00, //
  0x00, //
  0x00, //
  0x00, //
  0x80, // #
  0x00, //

  // @90 '/' (3 pixels wide)
  0x20, //   #
  0x20, //   #
  0x40, //  #
  0x40, //  #
  0x80, // #
  0x80, // #

  // @96 '0' (5 pixels wide)
  0xE0, // ###
  0xA0, // # #
  0xA0, // # #
  0xA0, // # #
  0xE0, // ###
  0x00, //

  // @102 '1' (3 pixels wide)
  0x40, //  #
  0xC0, // ##
  0x40, //  #
  0x40, //  #
  0xE0, // ###
  0x00, //

  // @108 '2' (3 pixels wide)
  0xC0, // ## 
  0x20, //   #
  0x40, //  #
  0x80, // #
  0xE0, // ###
  0x00, //

  // @114 '3' (3 pixels wide)
  0xC0, // ##
  0x20, //   #
  0x40, //  #
  0x20, //   #
  0xC0, // ##
  0x00, //

  // @120 '4' (3 pixels wide)
  0x80, // #
  0xA0, // # #
  0xE0, // ###
  0x20, //   #
  0x20, //   #
  0x00, //

  // @126 '5' (3 pixels wide)
  0xE0, // ###
  0x80, // #
  0xC0, // ##
  0x20, //   #
  0xC0, // ##
  0x00, //

  // @132 '6' (3 pixels wide)
  0xE0, // ###
  0x80, // #
  0xE0, // ###
  0xA0, // # #
  0xE0, // ###
  0x00, //

  // @138 '7' (3 pixels wide)
  0xE0, // ###
  0x20, //   #
  0x40, //  #
  0x80, // #
  0x80, // #
  0x00, //

  // @144 '8' (3 pixels wide)
  0xE0, // ###
  0xA0, // # #
  0xE0, // ###
  0xA0, // # #
  0xE0, // ###
  0x00, //

  // @150 '9' (3 pixels wide)
  0xE0, // ###
  0xA0, // # #
  0xE0, // ###
  0x20, //   #
  0xE0, // ###
  0x00, //

  // @156 ':' (1 pixels wide)
  0x00, //
  0x00, //
  0x80, // #
  0x00, //
  0x80, // #
  0x00, //

  // @162 ';' (2 pixels wide)
  0x00, //
  0x00, //
  0x40, //  #
  0x00, //
  0x40, //  #
  0x80, // #

  // @168 '<' (3 pixels wide)
  0x00, //
  0x20, //   #
  0x40, //  #
  0x80, // #
  0x40, //  #
  0x20, //   #

  // @174 '=' ( pixels wide)
  0x00, //
  0x00, //
  0xF0, // ####
  0x00, //
  0xF0, // ####
  0x00, //

  // @180 '>' (3 pixels wide)
  0x00, //
  0x80, // #
  0x40, //  #
  0x20, //   #
  0x40, //  #
  0x80, // #

  // @186 '?' (5 pixels wide)
  0x70, //  ###
  0x88, // #   #
  0x10, //    #
  0x20, //   #
  0x00, //
  0x20, //   #

  // @192 '@' (6 pixels wide)
  0x78, //  ####
  0x84, // #    #
  0xB4, // # ## #
  0xB4, // # ## #
  0x98, // #  ## 
  0x40, //  #  

  // @198 'A' (4 pixels wide)
  0x60, //  ##
  0x90, // #  #
  0x90, // #  #
  0xF0, // ####
  0x90, // #  #
  0x00, //

  // @204 'B' (4 pixels wide)
  0xE0, // ###
  0x90, // #  #
  0xF0, // ####
  0x90, // #  #
  0xE0, // ###
  0x00, //

  // @210 'C' (4 pixels wide)
  0x60, //  ##
  0x90, // #  #
  0x80, // #
  0x90, // #  #
  0x60, //  ##
  0x00, //

  // @216 'D' (4 pixels wide)
  0xE0, // ###
  0x90, // #  #
  0x90, // #  #
  0x90, // #  #
  0xE0, // ###
  0x00, //

  // @222 'E' (4 pixels wide)
  0xF0, // ####
  0x80, // #
  0xE0, // ###
  0x80, // #
  0xF0, // ####
  0x00, //

  // @228 'F' (4 pixels wide)
  0xF0, // ####
  0x80, // #
  0xE0, // ###
  0x80, // #
  0x80, // #
  0x00, //

  // @234 'G' (4 pixels wide)
  0x70, //  ###
  0x80, // #  
  0xB0, // # ##
  0x90, // #  #
  0x60, //  ##
  0x00, //

  // @240 'H' (4 pixels wide)
  0x90, // #  #
  0x90, // #  #
  0xF0, // ####
  0x90, // #  #
  0x90, // #  #
  0x00, //

  // @246 'I' (3 pixels wide)
  0xE0, // ###
  0x40, //  #
  0x40, //  #
  0x40, //  #
  0xE0, // ###
  0x00, //

  // @252 'J' (4 pixels wide)
  0x10, //    #
  0x10, //    #
  0x10, //    #
  0x90, // #  #
  0x60, //  ##
  0x00, //

  // @258 'K' (4 pixels wide)
  0x90, // #  #
  0xA0, // # #
  0xC0, // ##
  0xA0, // # #
  0x90, // #  #
  0x00, //

  // @264 'L' (4 pixels wide)
  0x80, // #
  0x80, // #
  0x80, // #
  0x80, // #
  0xF0, // ####
  0x00, //

  // @270 'M' (5 pixels wide)
  0x88, // #   #
  0xD8, // ## ##
  0xA8, // # # #
  0xA8, // # # #
  0x88, // #   #
  0x00, //

  // @276 'N' (5 pixels wide)
  0x88, // #   #
  0xC8, // ##  #
  0xA8, // # # #
  0x98, // #  ##
  0x88, // #   #
  0x00, //

  // @282 'O' (4 pixels wide)
  0x60, //  ##
  0x90, // #  #
  0x90, // #  #
  0x90, // #  #
  0x60, //  ##
  0x00, //

  // @288 'P' (4 pixels wide)
  0xE0, // ###
  0x90, // #  #
  0xE0, // ###
  0x80, // #
  0x80, // #
  0x00, //

  // @294 'Q' (4 pixels wide)
  0x60, //  ##
  0x90, // #  #
  0x90, // #  #
  0xD0, // # ##
  0x70, //  ###
  0x00, //

  // @300 'R' (4 pixels wide)
  0xE0, // ###
  0x90, // #  #
  0xE0, // ###
  0xA0, // # #
  0x90, // #  #
  0x00, //

  // @306 'S' (4 pixels wide)
  0x70, //  ###
  0x80, // #
  0x60, //  ##
  0x10, //    #
  0xE0, // ###
  0x00, //

  // @312 'T' (3 pixels wide)
  0xE0, // ###
  0x40, //  #
  0x40, //  #
  0x40, //  #
  0x40, //  #
  0x00, //

  // @318 'U' (4 pixels wide)
  0x90, // #  #
  0x90, // #  #
  0x90, // #  #
  0x90, // #  #
  0x60, //  ##
  0x00, //

  // @324 'V' (5 pixels wide)
  0x88, // #   #
  0x88, // #   #
  0x50, //  # #
  0x50, //  # #
  0x20, //   #
  0x00, //

  // @330 'W' (5 pixels wide)
  0x88, // #   #
  0x88, // #   #
  0xA8, // # # #
  0xD8, // ## ##
  0x88, // #   #
  0x00, //

  // @336 'X' (5 pixels wide)
  0x88, // #   #
  0x50, //  # #
  0x20, //   #
  0x50, //  # #
  0x88, // #   #
  0x00, //

  // @342 'Y' (5 pixels wide)
  0x88, // #   #
  0x50, //  # #
  0x20, //   #
  0x20, //   #
  0x20, //   #
  0x00, //

  // @348 'Z' (5 pixels wide)
  0xF8, // #####
  0x10, //    #
  0x20, //   #
  0x40, //  #
  0xF8, // #####
  0x00, //

  // @354 '[' (2 pixels wide)
  0xC0, // ##
  0x80, // #
  0x80, // #
  0x80, // #
  0x80, // #
  0xC0, // ##

  // @360 '\' (3 pixels wide)
  0x80, // #
  0x80, // #
  0x40, //  #
  0x40, //  #
  0x20, //   #
  0x20, //   #

  // @366 ']' (2 pixels wide)
  0xC0, // ##
  0x40, //  #
  0x40, //  #
  0x40, //  #
  0x40, //  #
  0xC0, // ##

  // @372 '^' (5 pixels wide)
  0x20, //   #
  0x50, //  # #
  0x88, // #   #
  0x00, //
  0x00, //
  0x00, //

  // @378 '_' (4 pixels wide)
  0x00, //
  0x00, //
  0x00, //
  0x00, //
  0x00, //
  0xFC, // #####

  // @384 '`' (2 pixels wide)
  0x80, // #
  0x40, //  #
  0x00, //
  0x00, //
  0x00, //
  0x00, //

//mcp

  // @390 'a' (5 pixels wide)
  0x00, //
  0x70, //  ###
  0x90, // #  #
  0x90, // #  #
  0x70, //  ###
  0x00, //

  // @396 'b' (4 pixels wide)
  0x80, // #
  0xE0, // ###
  0x90, // #  #
  0x90, // #  #
  0xE0, // ###
  0x00, //

  // @402 'c' (4 pixels wide)
  0x00, //
  0x70, //  ###
  0x80, // #
  0x80, // #
  0x70, //  ###
  0x00, //

  // @408 'd' (4 pixels wide)
  0x10, //    #
  0x70, //  ###
  0x90, // #  #
  0x90, // #  #
  0x70, //  ###
  0x00, //

  // @414 'e' (5 pixels wide)
  0x00, //
  0x70, //  ###
  0xF8, // #####
  0x80, // #
  0x70, //  ###
  0x00, //

  // @420 'f' (3 pixels wide)
  0x60, //  ##
  0x80, // #
  0xC0, // ##
  0x80, // #
  0x80, // #
  0x00, //

  // @426 'g' (4 pixels wide)
  0x00, //
  0x70, //  ###
  0x90, // #  #
  0x70, //  ###
  0x10, //    #
  0x60, //  ##

  // @432 'h' (4 pixels wide)
  0x80, // #
  0xE0, // ###
  0x90, // #  #
  0x90, // #  #
  0x90, // #  #
  0x00, //

  // @438 'i' (1 pixels wide)
  0x80, // #
  0x00, //
  0x80, // #
  0x80, // #
  0x80, // #
  0x00, //

  // @444 'j' (2 pixels wide)
  0x40, //  #
  0x00, //
  0x40, //  #
  0x40, //  #
  0x40, //  #
  0x80, // #

  // @450 'k' (3 pixels wide)
  0x80, // #  
  0xA0, // # #
  0xC0, // ##
  0xA0, // # #
  0xA0, // # #
  0x00, //

  // @456 'l' (1 pixels wide)
  0x80, // #
  0x80, // #
  0x80, // #
  0x80, // #
  0x80, // #
  0x00, //

  // @462 'm' (5 pixels wide)
  0x00, //
  0xF0, // ####
  0xA8, // # # #
  0xA8, // # # #
  0xA8, // # # #
  0x00, //

  // @468 'n' (4 pixels wide)
  0x00, //
  0xE0, // ###
  0x90, // #  #
  0x90, // #  #
  0x90, // #  #
  0x00, //

  // @474 'o' (4 pixels wide)
  0x00, //
  0x60, //  ##
  0x90, // #  #
  0x90, // #  #
  0x60, //  ##
  0x00, //

  // @480 'p' (4 pixels wide)
  0x00, //
  0xE0, // ###
  0x90, // #  #
  0x90, // #  #
  0xE0, // ###
  0x80, // #

  // @486 'q' (4 pixels wide)
  0x00, //
  0x70, //  ###
  0x90, // #  #
  0x90, // #  #
  0x70, //  ###
  0x10, //    #

  // @492 'r' (3 pixels wide)
  0x00, //
  0xA0, // # #
  0xC0, // ##
  0x80, // #
  0x80, // #
  0x00, //

  // @498 's' (3 pixels wide)
  0x60, //  ##
  0x80, // #
  0x40, //  #
  0x20, //   #
  0xC0, // ##
  0x00, //
 
  // @504 't' (3 pixels wide)
  0x40, //  #
  0xE0, // ###
  0x40, //  #
  0x40, //  #
  0x60, //  ##
  0x00, //

  // @510 'u' (4 pixels wide)
  0x00, //
  0x90, // #  #
  0x90, // #  #
  0x90, // #  #
  0x60, //  ##
  0x00, //

  // @516 'v' (5 pixels wide)
  0x00, //
  0x88, // #   #
  0x88, // #   #
  0x50, //  # #
  0x20, //   #
  0x00, //

  // @522 'w' (5 pixels wide)
  0x00, //
  0xA8, // # # #
  0xA8, // # # #
  0xA8, // # # #
  0x70, //  ###
  0x00, //

  // @528 'x' (4 pixels wide)
  0x00, //
  0x90, // #  #
  0x60, //  ##
  0x60, //  ##
  0x90, // #  #
  0x00, //

  // @534 'y' (5 pixels wide)
  0x00, //
  0x88, // #   #
  0x50, //  # #
  0x20, //   #
  0x20, //   #
  0x40, //  #

  // @540 'z' (4 pixels wide)
  0x00, //
  0xF0, // ####
  0x20, //   #
  0x40, //  #
  0xF0, // ####
  0x00, //

  // @546 '{' (2 pixels wide)
  0x40, //  #
  0x40, //  #
  0x80, // #
  0x40, //  #
  0x40, //  #
  0x00, //

  // @552 '|' (1 pixels wide)
  0x80, // #
  0x80, // #
  0x80, // #
  0x80, // #
  0x80, // #
  0x80, // #

  // @558 '}' (2 pixels wide)
  0x80, // #
  0x80, // #
  0x40, //  #
  0x80, // #
  0x80, // #
  0x00, //

  // @564 '~' (4 pixels wide)
  0x00, //
  0x50, //  # #
  0xA0, // # #
  0x00, //
  0x00, //
  0x00, //
};


// Font descriptor: dsc[ch][0] width of ch, dsc[ch][1] height of ch, dsc[ch][2] offset in toled_sans8_bmp of ch
static const int toled_sans5_dsc[95][3] = {
  {4, 6,   0},    //
  {1, 6,   6},    // !
  {3, 6,  12},    // "
  {5, 6,  18},    // #
  {5, 6,  24},    // $
  {5, 6,  30},    // %
  {6, 6,  36},    // &
  {1, 6,  42},    // '
  {2, 6,  48},    // (
  {2, 6,  54},    // )
  {3, 6,  60},    // *
  {3, 6,  66},    // +
  {1, 6,  72},    // ,
  {3, 6,  78},    // -
  {1, 6,  84},    // .
  {3, 6,  90},    // /
  {3, 6,  96},    // 0
  {3, 6, 102},    // 1
  {3, 6, 108},    // 2
  {3, 6, 114},    // 3
  {3, 6, 120},    // 4
  {3, 6, 126},    // 5
  {3, 6, 132},    // 6
  {3, 6, 138},    // 7
  {3, 6, 144},    // 8
  {3, 6, 150},    // 9
  {1, 6, 156},    // :
  {2, 6, 162},    // ;
  {3, 6, 168},    // <
  {5, 6, 174},    // =
  {3, 6, 180},    // >
  {5, 6, 186},    // ?
  {6, 6, 192},    // @
  {4, 6, 198},    // A
  {4, 6, 204},    // B
  {4, 6, 210},    // C
  {4, 6, 216},    // D
  {4, 6, 222},    // E
  {4, 6, 228},    // F
  {4, 6, 234},    // G
  {4, 6, 240},    // H
  {3, 6, 246},    // I
  {4, 6, 252},    // J
  {4, 6, 258},    // K
  {4, 6, 264},    // L
  {5, 6, 270},    // M
  {5, 6, 276},    // N
  {4, 6, 282},    // O
  {4, 6, 288},    // P
  {4, 6, 294},    // Q
  {4, 6, 300},    // R
  {4, 6, 306},    // S
  {3, 6, 312},    // T
  {4, 6, 318},    // U
  {5, 6, 324},    // V
  {5, 6, 330},    // W
  {5, 6, 336},    // X
  {5, 6, 342},    // Y
  {5, 6, 348},    // Z
  {2, 6, 354},    // [
  {3, 6, 360},    // \ backslash
  {2, 6, 366},    // ]
  {5, 6, 372},    // ^
  {4, 6, 378},    // _
  {2, 6, 384},    // `
  {5, 6, 390},    // a
  {4, 6, 396},    // b
  {4, 6, 402},    // c
  {4, 6, 408},    // d
  {5, 6, 414},    // e
  {3, 6, 420},    // f
  {4, 6, 426},    // g
  {4, 6, 432},    // h
  {1, 6, 438},    // i
  {2, 6, 444},    // j
  {3, 6, 450},    // k
  {1, 6, 456},    // l
  {5, 6, 462},    // m
  {4, 6, 468},    // n
  {4, 6, 474},    // o
  {4, 6, 480},    // p
  {4, 6, 486},    // q
  {3, 6, 492},    // r
  {3, 6, 498},    // s
  {3, 6, 504},    // t
  {4, 6, 510},    // u
  {5, 6, 516},    // v
  {5, 6, 522},    // w
  {4, 6, 528},    // x
  {5, 6, 534},    // y
  {4, 6, 540},    // z
  {2, 6, 546},    // {
  {1, 6, 552},    // |
  {2, 6, 558},    // }
  {4, 6, 564},    // ~
};


void toled_sans5(char ch, int * width, int * height, const uint8_t ** bmp ) {
  if( ch<' ' || ch> '~' ) {
    *width = 0;
    *height= 0;
    *bmp   = 0;
  } else {
    int ix = ch - ' ';
    *width = toled_sans5_dsc[ix][0];
    *height= toled_sans5_dsc[ix][1];
    *bmp   = &toled_sans5_bmp[ toled_sans5_dsc[ix][2] ];
  }
}
