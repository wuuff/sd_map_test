#include <Gamebuino.h>

Gamebuino gb;

void setup() {
  gb.begin();
  gb.titleScreen(F("SD MAP TEST"));
}

void loop() {
  if( gb.update() ){
    gb.display.cursorX = 0;
    gb.display.cursorY = 0;
    gb.display.print(F("Hello World"));
  }
}
