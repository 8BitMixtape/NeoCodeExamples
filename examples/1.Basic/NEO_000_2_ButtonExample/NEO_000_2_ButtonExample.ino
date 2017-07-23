/* 
 button example for two buttons

 15.3.2017 ChrisMicro

*/

#include "neolib.h"

void setup()
{
  neobegin();
}

void loop() 
{
  uint8_t b=getButton();

  setColorAllPixel(COLOR_GRAY);
  
  if( b == BUTTON_LEFT )                  setColorAllPixel( COLOR_GREEN ); 
  if( b == BUTTON_RIGHT )                 setColorAllPixel( COLOR_BLUE ); 
  if( b == BUTTON_LEFT + BUTTON_RIGHT )   setColorAllPixel( COLOR_PINK );
         
  pixels.show();                      // This sends the updated pixel color to the hardware.
  
}
