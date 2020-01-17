#include "Digispark.h"

void setup() {
  // don't need to set anything up to use DigiKeyboard
}


void loop() {
  // this is generally not necessary but with some older systems it seems to
  // prevent missing the first character after a delay:
DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT);

  DigiKeyboard.delay(500);
  
  // Type out this string letter by letter on the computer (assumes US-style
  // keyboard)
  DigiKeyboard.println("Chrome");
  
DigiKeyboard.delay(500);
   DigiKeyboard.sendKeyStroke(KEY_ENTER);
   DigiKeyboard.delay(2000);

   DigiKeyboard.println("https://www.youtube.com/watch?v=PX5Qg...");    
   DigiKeyboard.delay(500);
   
   DigiKeyboard.sendKeyStroke(KEY_ENTER);
  // It's better to use DigiKeyboard.delay() over the regular Arduino delay()
  // if doing keyboard stuff because it keeps talking to the computer to make
  // sure the computer knows the keyboard is alive and connected
  DigiKeyboard.delay(5000);
}