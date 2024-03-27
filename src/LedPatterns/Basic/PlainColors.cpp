#include "PlainColors.h"
#include "../LedPatterns.h"

extern NeoPixelBus<NeoGrbFeature, NeoWs2812xMethod> strip; // Utilisez `extern` pour accéder à l'instance `strip` définie ailleurs
extern HslColor hslRed;
extern HslColor hslGreen;
extern HslColor hslBlue;
extern HslColor hslPurple;
extern HslColor hslYellow;
extern HslColor hslCyan;
extern HslColor hslWhite;


void PlainColor(HslColor color){
    for (int i = 0; i < strip.PixelCount(); i++) {
        strip.SetPixelColor(i, color);
    }
    strip.Show();
}

void PlainWhite(){
    PlainColor(hslWhite);
}
void PlainRed(){
    PlainColor(hslRed);
}
void PlainGreen(){
    PlainColor(hslGreen);
}
void PlainBlue(){
    PlainColor(hslBlue);
}
void PlainPurple(){
    PlainColor(hslPurple);
}
void PlainYellow(){
    PlainColor(hslYellow);
}
void PlainCyan(){
    PlainColor(hslCyan);
}
