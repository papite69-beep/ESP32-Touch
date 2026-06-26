#include "config.h"
#include "display.h"
#include "touch.h"
#include "effects.h"
#include "pages.h"

void setup() {
  initDisplay();
  initTouch();
  initEffects();
  showHome();
}

void loop() {
  readTouch();
  updateEffects();
}
