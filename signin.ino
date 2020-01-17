#include "Digispark.h"

void setup() { }

void loop() {
    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.delay(1000);
    DigiKeyboard.println("agrawal2116");
    DigiKeyboard.delay(250);
    DigiKeyboard.sendKeyStroke('\t')
    DigiKeyboard.delay(250);
    DigiKeyboard.println("Ekadiv572)");
    DigiKeyboard.delay(250);
    DigiKeyboard.sendKeyStroke(KEY_ENTER)
    DigiKeyboard.delay(1000);
}