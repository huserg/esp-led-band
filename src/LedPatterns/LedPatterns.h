#ifndef LED_PATTERNS_H
#define LED_PATTERNS_H

#include <NeoPixelBus.h>
#include <Arduino.h>

void SetLEDOff(int pixelCount);
void SetLEDAndDisplay(int countRepeat, int colorsSize, HslColor colors[], int pixelCount);

#endif
