/* 
 potientiometer usage example

 15.3.2017 ChrisMicro

*/

#include "neolib.h"

void setup()
{
  neobegin();
}

void loop() 
{
  uint16_t lp = getPoti( POTI_LEFT );   // range 0..1023
  uint16_t rp = getPoti( POTI_RIGHT );  // range 0..1023

  uint32_t ledColor = colorWheel( lp/4 ); // use right poiti for LED color, scale to 0..255
  
  setColorAllPixel  ( COLOR_BLACK );     // first clear pixels
  displayBinaryValue( rp/4 , ledColor ); // display the value as binary on 8 NEO leds
   
  pixels.show();                         // This sends the updated pixel color to the hardware.
  
}
