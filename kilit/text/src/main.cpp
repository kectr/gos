// scrolltext demo for Adafruit RGBmatrixPanel library.
// Demonstrates double-buffered animation on our 16x32 RGB LED matrix:
// http://www.adafruit.com/products/420
// DOUBLE-BUFFERED ANIMATION DOES NOT WORK WITH ARDUINO UNO or METRO 328.

// Written by Limor Fried/Ladyada & Phil Burgess/PaintYourDragon
// for Adafruit Industries.
// BSD license, all text above must be included in any redistribution.

#include <RGBmatrixPanel.h>

// Most of the signal pins are configurable, but the CLK pin has some
// special constraints.  On 8-bit AVR boards it must be on PORTB...
// Pin 11 works on the Arduino Mega.  On 32-bit SAMD boards it must be
// on the same PORT as the RGB data pins (D2-D7)...
// Pin 8 works on the Adafruit Metro M0 or Arduino Zero,
// Pin A4 works on the Adafruit Metro M4 (if using the Adafruit RGB
// Matrix Shield, cut trace between CLK pads and run a wire to A4).

#define CLK  8   // USE THIS ON ADAFRUIT METRO M0, etc.
//#define CLK A4 // USE THIS ON METRO M4 (not M0)
//#define CLK 11 // USE THIS ON ARDUINO MEGA
#define OE   9
#define LAT 10
#define A   A0
#define B   A1
#define C   A2

// Last parameter = 'true' enables double-buffering, for flicker-free,
// buttery smooth animation.  Note that NOTHING WILL SHOW ON THE DISPLAY
// until the first call to swapBuffers().  This is normal.
RGBmatrixPanel matrix(A, B, C, CLK, LAT, OE, true);

// Similar to F(), but for PROGMEM string pointers rather than literals
#define F2(progmem_ptr) (const __FlashStringHelper *)progmem_ptr

const char str[] PROGMEM = "Huma IEEE";// bu yazı değiştirilmeli
int16_t    textX         = matrix.width(),
           textMin       = (int16_t)sizeof(str) * -12,
           hue           = 0;

void setup() {
  matrix.begin();
  matrix.setTextWrap(false); // Allow text to run off right edge
  matrix.setTextSize(2);
}

void loop() {
  // Clear background
  matrix.fillScreen(0);


  // Draw big scrolly text on top
  matrix.setTextColor(matrix.Color888(20,20,20));
  matrix.setCursor(textX, 3);
  matrix.setTextSize(1);
  matrix.print(F2(str));

  // Move text left (w/wrap), increase hue
  if((--textX) < textMin) textX = matrix.width();


  // On non-AVR boards, delay slightly so screen updates aren't too quick.
  delay(30);

  // Update display
  matrix.swapBuffers(false);
}
