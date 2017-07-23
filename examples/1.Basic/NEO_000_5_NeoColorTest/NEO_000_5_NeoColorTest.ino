// neo pixel color test
// 15.3.2017 ChrisMicro

#include "neolib.h"

void setup() 
{
  neobegin();
}

void loop() 
{
  pixels.setPixelColor(0,COLOR_RED);
  pixels.setPixelColor(1,COLOR_ORANGE);
  pixels.setPixelColor(2,COLOR_YELLOW);
  pixels.setPixelColor(3,COLOR_LIGHTGREEN);
  pixels.setPixelColor(4,COLOR_GREEN);
  pixels.setPixelColor(5,COLOR_DARKGREEN);
  pixels.setPixelColor(6,COLOR_BLUE);
  pixels.setPixelColor(7,COLOR_DARKBLUE);
  
  pixels.show();                      // This sends the updated pixel color to the hardware.
  delay(5000);                        

  pixels.setPixelColor(0,COLOR_BLACK);
  pixels.setPixelColor(1,COLOR_WHITE);
  pixels.setPixelColor(2,COLOR_GRAY);
  pixels.setPixelColor(3,COLOR_BROWN);
  pixels.setPixelColor(4,COLOR_TURQUOISE);
  pixels.setPixelColor(5,COLOR_CYAN);
  pixels.setPixelColor(6,COLOR_PINK);
  pixels.setPixelColor(7,COLOR_BLACK);

  pixels.show();                      // This sends the updated pixel color to the hardware.
  delay(5000);                        
}

