#include <Arduboy2.h>

Arduboy2 arduboy;

void setup() {

  arduboy.boot();
  arduboy.flashlight(); 
  arduboy.systemButtons();

}

const uint8_t PROGMEM p38_0[] = {
18, 19,
0x00, 0x20, 0xB0, 0xF0, 0x20, 0x20, 0x20, 0x60, 0x60, 0x60, 0xBC, 0x66, 0xBC, 0x60, 0x00, 0x30, 0x00, 0x00,
0x00, 0x20, 0x6F, 0x7F, 0x20, 0x20, 0x20, 0x32, 0x37, 0x35, 0xED, 0x37, 0xED, 0x35, 0x07, 0x67, 0x02, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,

0x00, 0x20, 0xB0, 0xF0, 0x20, 0x20, 0x20, 0x60, 0x60, 0x60, 0xBC, 0x66, 0xBC, 0x60, 0x00, 0x60, 0x00, 0x00,
0x00, 0x20, 0x6F, 0x7F, 0x20, 0x20, 0x20, 0x32, 0x37, 0x35, 0xED, 0x37, 0xED, 0x35, 0x07, 0x37, 0x02, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const unsigned char PROGMEM p38_dropIn_07[] = {
48, 64,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x01, 0x01, 0x01, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 
0x7c, 0x7c, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0x7f, 0x7f, 0x7f, 0x7f, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0xfc, 0xfc, 0xfc, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xf8, 0xf8, 0xf8, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0xe0, 0xe0, 0xe0, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0xe0, 0xe0, 0xe0, 
0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0xfc, 0xfc, 0xfc, 0xfc, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0x7c, 0x7c, 0x7c, 0x7c, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x03, 0x03, 0x03, 0x03, 
0x00, 0x00, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0x0f, 0x0f, 0x0f, 0x0f, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0xf0, 0xf0, 0xf0, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0xff, 0xff, 0xff, 0xff, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1f, 0x1f, 0x1f, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
};

const unsigned char PROGMEM p38_dropIn_08[] = {
38, 64,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0xc0, 0xf8, 0xf8, 0xf8, 0xc0, 0xc0, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x01, 0x01, 0x01, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xe0, 0xe0, 0x00, 0x00, 0x00, 
0x0f, 0x0f, 0x0f, 0x0f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x8f, 0x8f, 0x8f, 0x7f, 0x7f, 0x7f, 0x8f, 0x8f, 0x8f, 0x8f, 0x7f, 0x7f, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x0f, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0xc0, 0xfc, 0xfc, 0xfc, 0xfc, 0x3c, 0x3c, 0x3c, 0x3c, 0x3f, 0x3f, 0x3f, 0x3c, 0x3c, 0x3c, 0x3f, 0x3f, 0x3f, 0x3f, 0x3c, 0x3c, 0x3c, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xc0, 0xc0, 0xc0, 
0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x3f, 0x3f, 0x3f, 0x3f, 0x3c, 0x3c, 0x3c, 0x3c, 0xfc, 0xfc, 0xfc, 0x3c, 0x3c, 0x3c, 0xfc, 0xfc, 0xfc, 0xfc, 0x3c, 0x3c, 0x3c, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x03, 0x03, 0x03, 
0xf0, 0xf0, 0xf0, 0xf0, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xf1, 0xf1, 0xf1, 0xfe, 0xfe, 0xfe, 0xf1, 0xf1, 0xf1, 0xf1, 0xfe, 0xfe, 0xfe, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xf0, 0xf0, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x80, 0x80, 0x80, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x07, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x1f, 0x1f, 0x1f, 0x03, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const unsigned char PROGMEM p38_dropIn_09[] = {
32, 45,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xfc, 0x1f, 0x1f, 0x1f, 0xfc, 0xfc, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0x1f, 0x1f, 0xfc, 0xfc, 0xfc, 0x1f, 0x1f, 0x1f, 0xfc, 0xfc, 0x00, 0x00, 0x00, 0x1f, 0x1f, 0x1f, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xe0, 0xfc, 0xfc, 0xfc, 0x1c, 0x1c, 0x1c, 0x1f, 0x1f, 0x1c, 0x1c, 0x1c, 0x1f, 0x1f, 0x1f, 0x1c, 0x1c, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xe0, 0xe0, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xe0, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0x1f, 0x1f, 0xe7, 0xe7, 0xe7, 0x1f, 0x1f, 0x1f, 0xe7, 0xe7, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x00, 0x00, 
0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xff, 0xff, 0x07, 0x07, 0x07, 0xff, 0xff, 0xff, 0x07, 0x07, 0x00, 0x00, 0x00, 0x1f, 0x1f, 0x1f, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x1f, 0x1f, 0x1f, 0x07, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const unsigned char PROGMEM p38_dropIn_10[] = {
28, 38,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xfe, 0x0f, 0x0f, 0xfe, 0xfe, 0xfe, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0xc0, 0x00, 
0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x1f, 0x1f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0xe7, 0xe7, 0x9f, 0x9f, 0xe7, 0xe7, 0xe7, 0x9f, 0x9f, 0x80, 0x80, 0x87, 0x87, 0x87, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x0c, 0x7f, 0x7f, 0x73, 0x73, 0x73, 0xf3, 0xf3, 0x73, 0x73, 0xf3, 0xf3, 0xf3, 0x73, 0x73, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x0c, 
0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0xf9, 0xf9, 0x3e, 0x3e, 0xf9, 0xf9, 0xf9, 0x3e, 0x3e, 0x00, 0x00, 0xf8, 0xf8, 0xf8, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x1f, 0x3c, 0x3c, 0x1f, 0x1f, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const unsigned char PROGMEM p38_dropIn_11[] = {
23, 27,
0xf0, 0xf0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xfe, 0xfe, 0xc7, 0xfe, 0xfe, 0xc0, 0xc0, 0x00, 0xf0, 0xf0, 0x00, 
0xfe, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x21, 0xf9, 0xd9, 0xd9, 0xde, 0xde, 0xd9, 0xde, 0xde, 0xd9, 0xd9, 0xf8, 0xf8, 0xf8, 0x20, 
0x7b, 0x7f, 0x18, 0x18, 0x18, 0x18, 0x18, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0xfb, 0xfb, 0x1c, 0xfb, 0xfb, 0x1c, 0x1c, 0x00, 0x78, 0x78, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x07, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const unsigned char PROGMEM p38_dropIn_12[] = {
19, 21,
0x20, 0xb8, 0xb8, 0x20, 0x20, 0x20, 0x20, 0x60, 0x60, 0x60, 0x60, 0xbe, 0x67, 0xbe, 0x60, 0x60, 0x38, 0x38, 0x00, 
0x80, 0xbf, 0xbf, 0x80, 0x80, 0x80, 0x80, 0xc4, 0xce, 0xca, 0xca, 0xbb, 0xca, 0xbb, 0xca, 0xca, 0x8e, 0x8e, 0x04, 
0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x1c, 0x0f, 0x00, 0x00, 0x03, 0x03, 0x00, 
};

const int32_t p38_dropIn_locations[] = {
  -100, -250, 33,
  -500, -500, 33,



  0, 0, 0,
  0, 0, 0,
  0, 0, 0, 
  0, 10, 0,
  0, 14, 0,
  0, 20, 0,
  1, 23, 0,
  };

const uint8_t * const p38_dropIn_images[] PROGMEM = { p38_dropIn_07,p38_dropIn_08,p38_dropIn_09,p38_dropIn_10,p38_dropIn_11, p38_dropIn_12 };

/* -----------------------------------------------------------------------------------------------------------------------------
 *  Main loop
 * -----------------------------------------------------------------------------------------------------------------------------
 */
uint8_t dropIn = 1;
uint8_t size = 33;
void loop() {

  if (!(arduboy.nextFrame())) return;

  arduboy.clear();
  arduboy.pollButtons();

/*
if (arduboy.everyXFrames(20)) {
  dropIn++;
  if (dropIn == 13) dropIn = 1;
}
*/

if (arduboy.everyXFrames(5)) {
  size--;
  if (size == 0) size = 33;
}

  switch (dropIn) {
/*
    case 1:
      arduboy.fillRect(31, 0, 128 - 31, 15, WHITE);
      arduboy.fillRect(31, 48, 128 - 31, 64 - 48, WHITE);
      arduboy.fillRect(0, 15, 64, 48 - 15, WHITE);
      break;

    case 2:
      arduboy.fillRect(37, 0, 128 - 31, 18, WHITE);
      arduboy.fillRect(37, 45, 128 - 37, 64 - 45, WHITE);
      arduboy.fillRect(11, 18, 64 - 11, 45 - 18, WHITE);
      break;

    case 3:
      arduboy.fillRect(44, 2, 128 - 44, 20, WHITE);
      arduboy.fillRect(44, 41, 128 - 44, 61 - 41, WHITE);
      arduboy.fillRect(24, 22, 39, 19, WHITE);
      arduboy.fillRect(83, 0, 21, 2, WHITE);
      arduboy.fillRect(83, 61, 21, 3, WHITE);
      arduboy.fillRect(123, 0, 5, 2, WHITE);
      arduboy.fillRect(124, 61, 5, 3, WHITE);
      break;

    case 4:
      arduboy.fillRect(29, 10, 99, 15, WHITE);
      arduboy.fillRect(29, 38, 99, 15, WHITE);
      arduboy.fillRect(14, 25, 29, 13, WHITE);
      arduboy.fillRect(114, 25, 14, 13, WHITE);
      arduboy.fillRect(57, 0, 15, 10, WHITE);
      arduboy.fillRect(86, 0, 14, 10, WHITE);
      arduboy.fillRect(57, 53, 15, 11, WHITE);
      arduboy.fillRect(86, 53, 14, 11, WHITE);
      break;

    case 5:
      arduboy.fillRect(9, 0, 30, 6, WHITE);
      arduboy.fillRect(49, 0, 10, 6, WHITE);
      arduboy.fillRect(69, 0, 10, 6, WHITE);
      arduboy.fillRect(39, 6, 10, 10, WHITE);
      arduboy.fillRect(59, 6, 10, 10, WHITE);
      arduboy.fillRect(19, 16, 80, 11, WHITE);
      arduboy.fillRect(9, 27, 20, 9, WHITE);
      arduboy.fillRect(79, 27, 29, 9, WHITE);
      arduboy.fillRect(79, 27, 29, 9, WHITE);
      arduboy.fillRect(19, 36, 80, 11, WHITE);
      arduboy.fillRect(39, 47, 10, 10, WHITE);
      arduboy.fillRect(59, 47, 10, 10, WHITE);
      arduboy.fillRect(9, 57, 30, 7, WHITE);
      arduboy.fillRect(49, 57, 10, 7, WHITE);
      arduboy.fillRect(69, 57, 10, 7, WHITE);
      break;

    case 6:
      arduboy.fillRect(0, 0, 57, 6, WHITE);
      arduboy.fillRect(64, 0, 8, 6, WHITE);
      arduboy.fillRect(7, 6, 22, 7, WHITE);
      arduboy.fillRect(36, 6, 7, 7, WHITE);
      arduboy.fillRect(50, 6, 7, 7, WHITE);
      arduboy.fillRect(29, 13, 7, 7, WHITE);
      arduboy.fillRect(43, 13, 7, 7, WHITE);
      arduboy.fillRect(14, 20, 58, 8, WHITE);

      arduboy.fillRect(7, 28, 14, 7, WHITE);
      arduboy.fillRect(57, 28, 21, 7, WHITE);

      arduboy.fillRect(14, 35, 58, 8, WHITE);
      arduboy.fillRect(29, 43, 7, 7, WHITE);
      arduboy.fillRect(43, 43, 7, 7, WHITE);
      arduboy.fillRect(7, 50, 22, 7, WHITE);
      arduboy.fillRect(36, 50, 7, 7, WHITE);
      arduboy.fillRect(50, 50, 7, 7, WHITE);
      arduboy.fillRect(0, 57, 57, 7, WHITE);
      arduboy.fillRect(64, 57, 8, 7, WHITE);

      break;
*/

    case 1 ... 6:
      {
        uint8_t w = pgm_read_byte(&p38_0[0]);
//        int32_t x = p38_dropIn_locations[(dropIn - 1)];
//        int32_t y = p38_dropIn_locations[(dropIn - 1) + 1];
//        int32_t size = p38_dropIn_locations[(dropIn - 1) + 2];

int32_t x = 64 - (10 * size);;
int32_t y = 32 - (10 * size);

Serial.print(x);
Serial.print(',');
Serial.print(y);
Serial.print(':');
        for (uint8_t b = 0; b < 3; b++) {

          for (uint8_t a = 0; a < w; a++) {

            uint8_t c = pgm_read_byte(&p38_0[2 + (b * w) + a]);

            // Serial.print("(");
            // Serial.print(c);
            // Serial.print(") ");

            for (uint8_t d = 0; d < 8; d++) {

              uint8_t e = (c & (1 << d));

              if (e > 0) {
                
                int32_t x1 = x + (a * size);
                int32_t y1 = y + (b * size * 8) + (d * size);

                if (x1+size < 0 || x1 > WIDTH-1 || y1+size < 0 || y1 > HEIGHT-1) {

                }
                else {
                  arduboy.fillRect(x1, y1, size, size, WHITE);
                }
              }

            }

            Serial.print(" ");

          }

          Serial.println(" ");

        }

        Serial.println("----");
      }

      break;

    case 7 ... 12:
      uint8_t i = dropIn - 7;
      uint8_t x = pgm_read_byte(&p38_dropIn_locations[i * 3]);
      uint8_t y = pgm_read_byte(&p38_dropIn_locations[(i * 3) + 1]);

      Sprites::drawSelfMasked(x, y, pgm_read_word_near(&p38_dropIn_images[static_cast<uint8_t>(i) ]), 0);

      break;

  }
  

  arduboy.display();


}

