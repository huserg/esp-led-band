#include "LedPatterns.h"

extern NeoPixelBus<NeoGrbFeature, NeoWs2812xMethod> strip; // Utilisez `extern` pour accéder à l'instance `strip` définie ailleurs


// color def
HslColor hslRed(0, 1.0, 0.5);
HslColor hslGreen(120.0/360.0, 1.0, 0.5);
HslColor hslBlue(240.0/360.0, 1.0, 0.5);
HslColor hslPurple(270.0/360.0, 1.0, 0.5);
HslColor hslYellow(60.0/360.0, 1.0, 0.5);
HslColor hslCyan(180.0/360.0, 1.0, 0.5);
HslColor hslWhite(0, 0, 1.0);
HslColor hslBlack(0, 0, 0);


void SetLEDOff(int pixelCount) {
  for (int i = 0; i < pixelCount; i++) {
    strip.SetPixelColor(i, HslColor(0, 0, 0));
  }
  strip.Show();
}

void SetLEDAndDisplay(int countRepeat, int colorsSize, HslColor colors[], int pixelCount) {
  int pixelIndex = 0;
  while(pixelIndex < pixelCount) {
    for (int colorIndex = 0; colorIndex < colorsSize && pixelIndex < pixelCount; colorIndex++) {
      for (int repeat = 0; repeat < countRepeat && pixelIndex < pixelCount; repeat++, pixelIndex++) {
        strip.SetPixelColor(pixelIndex, colors[colorIndex]);
      }
    }
  }
  strip.Show();
}
