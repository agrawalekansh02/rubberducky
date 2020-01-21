#include "Digispark.h"

void setup() { }

void loop() {
    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.delay(1000);
    DigiKeyboard.println("agrawal2116");
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke('\t')
    DigiKeyboard.delay(500);
    DigiKeyboard.println("Ekadiv572)");
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ENTER)
    DigiKeyboard.delay(35000);
    DigiKeyboard.sendKeyStroke(MOD_GUI_LEFT);
    DigiKeyboard.delay(500);
    DigiKeyboard.println("chrome");
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(3000);
    DigiKeyboard.sendKeyStroke("drive.google.com")
    DigiKeyboard.delay(5000);
    DigiKeyboard.sendKeyStroke(KEY_ENTER)
    DigiKeyboard.delay(2000);
    DigiKeyboard.sendKeyStroke("Ekadiv572)")
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);

}