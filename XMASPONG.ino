

//screen = 64x128 pixels
#include <Arduboy.h>
Arduboy ad;

#define WIDTH 128
#define HEIGHT 62

const unsigned char image[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 
  0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
  0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
  0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 
  0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
  0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 
  0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
  0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
  0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
  0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xf8, 0xf8, 0xf8, 0x00, 0x00, 
  0x00, 0xf8, 0xf8, 0xf8, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xf8, 0xf8, 
  0xf0, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xf8, 0xf8, 0xf8, 0xf0, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xf8, 
  0xf8, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xf8, 0xf8, 0xf8, 0x70, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 
  0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0x00, 0xe0, 0xf0, 0xf0, 0xf0, 0xf0, 
  0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xe0, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xfe, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0x3f, 0x3f, 0x3f, 0x00, 0x00, 
  0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xe0, 0xc0, 0xc0, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x01, 0x01, 
  0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xe0, 0xc0, 0xc0, 0xc1, 0xe1, 0xc1, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 
  0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 
  0x7f, 0x03, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 
  0x07, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x03, 0x07, 0x03, 0x7f, 0x7f, 0x7f, 0x7f, 
  0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 
  0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x07, 0x03, 0x07, 
  0x03, 0x00, 0x00, 0x3f, 0x7f, 0x7f, 0x7f, 0x7f, 
  0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x00, 0x00, 
  0x00, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 
  0x7f, 0x7f, 0x7f, 0x00, 0x00, 0x00, 0x03, 0x07, 
  0x03, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 
  0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 
  0x7f, 0x7f, 0x07, 0x07, 0x07, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  
};

const unsigned char image2[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0x80, 
  0x80, 0x80, 0x00, 0x00, 0xc0, 0xe0, 0xe0, 0xe0, 
  0xe0, 0xe0, 0xe0, 0x80, 0x80, 0x00, 0x00, 0x00, 
  0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 
  0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 
  0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0x00, 0x00, 0x00, 
  0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 
  0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 
  0xe0, 0xe0, 0x80, 0x80, 0x00, 0x00, 0x00, 0xe0, 
  0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 
  0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 
  0xe0, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0xe0, 
  0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 
  0x00, 0x00, 0x00, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 
  0xe0, 0xe0, 0xe0, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0x3b, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
  0x33, 0x33, 0x33, 0x33, 0x33, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xc3, 0xc3, 0xeb, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0x3f, 0x3f, 0x3f, 0x00, 0x00, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xc3, 0xc3, 0xc3, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0x3f, 0x3f, 0x3f, 0x00, 0x00, 0x00, 0x03, 
  0x03, 0x03, 0x3f, 0x3f, 0x3f, 0xff, 0xff, 0xff, 
  0xfe, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0x3f, 0x3f, 
  0x3f, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x80, 
  0x80, 0x8d, 0x1f, 0x1f, 0x1f, 0x80, 0x80, 0x8f, 
  0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x8f, 0x00, 0x00, 
  0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 
  0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 
  0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x00, 0x00, 0x00, 
  0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x1f, 0x1f, 
  0x1f, 0x07, 0x07, 0x07, 0x9f, 0x9f, 0x9f, 0x9f, 
  0x9f, 0x9f, 0x1f, 0x1f, 0x1e, 0x00, 0x00, 0x1f, 
  0x1f, 0x1f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 
  0x87, 0x87, 0x87, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 
  0x9f, 0x1f, 0x1f, 0x1f, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x80, 0x80, 0x80, 0x9f, 0x9f, 0x9f, 
  0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x80, 0x80, 
  0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x0f, 0x0f, 0x0f, 0x3f, 0x3f, 0xbf, 0xff, 
  0xff, 0xff, 0xf8, 0xf8, 0xff, 0xff, 0xff, 0xff, 
  0x3f, 0x3f, 0x3f, 0x0f, 0x0f, 0x07, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 
  0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 
  0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 
  0xfe, 0xf8, 0xf8, 0xf8, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xfe, 0xfe, 0xfc, 0x00, 0x00, 0xfe, 
  0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x0f, 0x0f, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xfe, 0xfe, 0xfe, 0x00, 0x00, 0x00, 0xfe, 
  0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 
  0xcf, 0xce, 0xce, 0xc6, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x7c, 0x7c, 0x7c, 0x7f, 0x7f, 0x7f, 0x7f, 
  0x7f, 0x7f, 0x03, 0x03, 0x3f, 0x7f, 0x7f, 0x7f, 
  0x7f, 0x7f, 0x7f, 0x7c, 0x7c, 0x38, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 
  0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
  0x03, 0x03, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 
  0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x03, 0x03, 
  0x07, 0x7f, 0x7f, 0x7f, 0x03, 0x03, 0x3f, 0x7f, 
  0x7f, 0x7f, 0x7f, 0x7f, 0x3f, 0x00, 0x00, 0x7f, 
  0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 
  0x07, 0x03, 0x03, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 
  0x7f, 0x7f, 0x7f, 0x7f, 0x00, 0x00, 0x00, 0x1c, 
  0x1c, 0x1c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 
  0x7c, 0x7c, 0x7c, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 
  0x7f, 0x1f, 0x1f, 0x0f, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xfe, 0xfe, 0xfe, 0xfe, 
  0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0x3e, 0x3e, 
  0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xf8, 0xf8, 
  0xf8, 0x00, 0x00, 0x00, 0xf8, 0xf8, 0xf8, 0xfe, 
  0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0x3e, 0x3e, 0x3e, 
  0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xf8, 0xf8, 
  0xf8, 0x00, 0x00, 0x00, 0xfe, 0xfe, 0xfe, 0xfe, 
  0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0x3e, 0x3e, 0xfe, 
  0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xf8, 0xf8, 0xf8, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 
  0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xf0, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 
  0x7f, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0x0c, 0x0c, 0x0c, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xf0, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x7f, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xf3, 0xf3, 0xf3, 0xf3, 
  0xf3, 0xf3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 
  0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
  0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
  0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 
  0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  
};
const unsigned char image3[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 
  0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 
  0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 
  0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 
  0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x07, 0x0f, 0x07, 0x0f, 0x0f, 0x07, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0f, 
  0x07, 0x0f, 0x07, 0x0f, 0x07, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 
  0xfe, 0xf8, 0xf8, 0xf8, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xfe, 0xfe, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0f, 0x0f, 
  0x0f, 0xff, 0xff, 0xff, 0x0f, 0x0f, 0x0f, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 
  0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 
  0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x00, 0x00, 
  0x00, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 0x03, 
  0x03, 0x03, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xf8, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0x00, 0x00, 
  0x00, 0xf8, 0xfc, 0xfc, 0x00, 0x00, 0x00, 0xf8, 
  0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xfc, 
  0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 
  0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xe0, 
  0xe0, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xe0, 0xe0, 0xe0, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 
  0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 
  0xfc, 0xfc, 0xe0, 0xe0, 0xe0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xfc, 
  0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 
  0xfc, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0x3f, 0x3f, 0x3f, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 
  0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 
  0x3f, 0x38, 0x38, 0x38, 0xf8, 0xf8, 0xf8, 0xf8, 
  0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 
  0x07, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x07, 
  0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x07, 0x0f, 0x07, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 
  0x3f, 0x01, 0x01, 0x01, 0x07, 0x0f, 0x07, 0x3f, 
  0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x3f, 
  0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 
  0x3f, 0x00, 0x00, 0x00, 0x3f, 0x3f, 0x3f, 0x3f, 
  0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x00, 0x00, 0x00, 
  0x06, 0x0f, 0x06, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 
  0x3e, 0x3f, 0x3f, 0x3e, 0x3f, 0x3f, 0x3f, 0x3f, 
  0x3f, 0x3f, 0x0f, 0x07, 0x07, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x3e, 0x3f, 0x3e, 0x3e, 0x3f, 0x3e, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  
};
const unsigned char image4[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x80, 0x80, 0x80, 0xa0, 0xf0, 0xf0, 0xf0, 
  0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 
  0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0x80, 0x80, 
  0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 
  0xe0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 
  0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 
  0xf0, 0xf0, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 
  0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0xf0, 
  0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0x80, 0x80, 
  0x80, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xf0, 0xf0, 
  0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 
  0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 
  0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xe0, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x03, 0x03, 0x03, 0xe3, 
  0xe3, 0xe3, 0xe3, 0xe3, 0xe3, 0xe3, 0xe3, 0xe3, 
  0xe3, 0xc3, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x03, 0x03, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 
  0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xfc, 0xfc, 0xfc, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xe3, 0xe3, 0xe3, 0xe3, 0xe3, 0xe3, 0xe3, 0xe3, 
  0xe3, 0xe3, 0xe3, 0xe3, 0xe3, 0xc3, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x3f, 0x7f, 0x3f, 0x7f, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xf8, 0xf8, 0xf8, 0xf8, 
  0xf8, 0xf8, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x3f, 
  0x7f, 0x3f, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x07, 0x07, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 
  0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x0f, 0x07, 0x07, 0xff, 0xff, 0xff, 0xff, 0x0f, 
  0x07, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 
  0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf0, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x01, 0x01, 
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
  0x01, 0x01, 0x01, 0x01, 0x03, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x01, 
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x03, 0x01, 
  0x00, 0x00, 0x00, 0x01, 0x03, 0x01, 0x01, 0x01, 
  0x01, 0x01, 0x01, 0x01, 0x03, 0x01, 0x00, 0x00, 
  0x00, 0x01, 0x03, 0x01, 0x01, 0x01, 0x03, 0x01, 
  0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 0x01, 0x00, 
  0x00, 0x00, 0x01, 0x03, 0x01, 0x01, 0x01, 0x01, 
  0x03, 0x01, 0x00, 0x00, 0x00, 0x01, 0x03, 0x01, 
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
  0x01, 0x01, 0x01, 0x01, 0x03, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xe0, 0xe0, 0xe0, 0xe8, 0xfc, 0xfc, 0xfc, 
  0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 
  0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xe0, 0xe0, 
  0xe0, 0xc0, 0x00, 0x00, 0x00, 0xfc, 0xfc, 0xfc, 
  0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xf8, 
  0x00, 0x00, 0x00, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 
  0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xf8, 0x00, 0x00, 
  0x00, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 
  0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 
  0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 
  0xfc, 0xf8, 0x00, 0x00, 0x00, 0xfc, 0xfc, 0xfc, 
  0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 
  0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 
  0xfc, 0xfc, 0xe0, 0xe0, 0xe0, 0xc0, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x01, 0x01, 0x01, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xf8, 0xf8, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 
  0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x79, 0x79, 0x79, 0x79, 
  0x79, 0x79, 0x79, 0x79, 0x79, 0x79, 0x79, 0x79, 
  0x79, 0x30, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xc1, 0xc1, 0xc1, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0x7f, 0x7f, 0x7f, 0x3f, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x1f, 0x1f, 0x1f, 0x5f, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xfe, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1f, 0x1f, 
  0x1f, 0x0f, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 
  0x0f, 0x1f, 0x1f, 0x1f, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x00, 0x00, 
  0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xfe, 0xfe, 
  0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 
  0xfe, 0x7c, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 
  0x1f, 0x1f, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xfe, 0xfe, 0xfe, 0x7c, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  
};

int gs = 0;
int jp = 0;

//ball's location:
int bx = 62;
int by = 0;
int bs = 4;

//ball direction
int br = -1;
int bd = 1;

//paddle
int pw = 4;
int ph = 9;
int px=0;
int py = 0;

//computer paddle
int cpy = 0;
int cpx = 127-pw;
int ps = 0;
int cs = 0;

int counter = 0;

void resetgame(){
  bx=63;
  ps=0;
  cs=0;
}

void setup() {
  ad.begin();
  srand(7/8);
  ad.setFrameRate(60);
  ad.clear();
  
}

void loop() {
  if(!ad.nextFrame()){
    return;
  }
  ad.clear();
  switch(gs){
    case 0:
      ad.drawBitmap(0,0,image2,WIDTH,HEIGHT,1);
      if(ad.pressed(A_BUTTON) and jp == 0){
        jp = 1;
        gs =1;
      }
      break;
    case 1:
      //title screen
      ad.drawBitmap(0,-5, image, WIDTH,HEIGHT,1);
      ad.setCursor(10,55);
      ad.print("PRESS   TO CONTINUE");
      counter +=1;
      if(counter <60){
        ad.setCursor(46,55);
        ad.print("A");
      }
      if(counter >= 120){
        counter=0;
      }
      if(ad.pressed(A_BUTTON) and jp == 0){
        jp = 1;
        gs =2;
      }
      break;
    case 2:
      //gameplay screen
      ad.setCursor(0,0);
      ad.print("TIM:");
      ad.setCursor(25,0);
      ad.print(ps);
      ad.setCursor(90,0);
      ad.print("CPU:");
      ad.setCursor(118,0);
      ad.print(cs);
      ad.fillRect(bx, by,bs,bs, WHITE);
      if(br==1){
        bx+=1;
      }
      if(br==-1){
        bx -=1;
      }
      if(bd == 1){
        by += 1;
      }
      if(bd ==-1){
        by -=1;
      }
      if(by==0){
        bd=1;
      }
      if(by+bs ==63){
        bd = -1;
      }
      ad.fillRect(px,py,pw,ph,WHITE);
      if(ad.pressed(UP_BUTTON) and py >0){
        py -=1;
      }
      if(ad.pressed(DOWN_BUTTON) and py+ph <63){
        py +=1;
      }
      ad.fillRect(cpx,cpy,pw,ph,WHITE);
      if(bx >115 or rand()%20==1){
        if(by<cpy){
          cpy -=1;
        }
        if(by +bs>cpy+ph){
          cpy +=1;
        }
      }
      if(bx < -10){
        bx=63;
        cs +=1;
      }
      if(bx>130){
        bx = 63;
        ps +=1;
      }
      if(ps==5){
        gs = 3;
      }
      if(cs==5){
        gs=4;
      }
      if(bx ==px +pw and py<by+bs and py+ph >by){
        br =1;
      }
      if(bx +bs ==cpx and cpy <by+bs and cpy+ph>by){
        br=-1;
      }
      break;

 //----------------------------
    case 3:
      //win screen
      ad.drawBitmap(0,0,image3,WIDTH,HEIGHT,1);
      if(ad.pressed(A_BUTTON) and jp ==0){
        jp =1;
        resetgame();
        gs=1;
      }
      break;
    case 4:
      //game over screen
      ad.drawBitmap(0,0,image4,WIDTH,HEIGHT,1);
      if(ad.pressed(A_BUTTON) and jp == 0){
        jp = 1;
        resetgame();
        gs=1;
      }
      break;
  }
  if(ad.notPressed(A_BUTTON)){
    jp = 0;
  }
  ad.display();
}
