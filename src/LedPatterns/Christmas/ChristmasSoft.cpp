#include "ChristmasSoft.h"
#include "../LedPatterns.h"

extern NeoPixelBus<NeoGrbFeature, NeoWs2812xMethod> strip; // Utilisez `extern` pour accéder à l'instance `strip` définie ailleurs
extern HslColor hslRed;
extern HslColor hslGreen;

const int delayTime = 10000; // Temps pour l'effet de transition

// Assurez-vous que la taille de vos tableaux de couleurs correspond au nombre total de LEDs
HslColor colorsSoft[] = {hslRed,hslRed,hslRed,hslRed,hslRed,hslRed, hslGreen,hslGreen,hslGreen,hslGreen,hslGreen,hslGreen}; // Créez un tableau pour stocker les couleurs de toutes les LEDs
int numOfColorsSoft = sizeof(colorsSoft) / sizeof(colorsSoft[0]); // Calculer le nombre de couleurs

int posOfFirstLed = 0;

void interpolateHueForFirstLedOfEachColorBlock(HslColor& ledColor, float startHue, float endHue, int steps, int delayTime) {
    float hueIncrement = (endHue - startHue) / steps;

    for (int step = 0; step <= steps; step++) {
        float currentHue = startHue + (hueIncrement * step);
        ledColor = HslColor(currentHue, 1.0, 0.5); // Saturation et luminance fixées pour la démo
        SetLEDAndDisplay(1, numOfColorsSoft, colorsSoft, strip.PixelCount()); // Mise à jour de l'affichage avec la nouvelle couleur
        delay(delayTime / steps); // Délai divisé par le nombre d'étapes pour une transition sur 1 seconde
    }
}

void ChristmasSoft() {
    // Calculate the start and end hues based on the current color of the first LED in the block
    const int transitionSteps = 20;
    const int transitionDelay = delayTime / transitionSteps;

    // Shift colors by one position
    HslColor lastColor = colorsSoft[numOfColorsSoft - 1];
    for(int i = numOfColorsSoft - 1; i > 0; i--) {
        colorsSoft[i] = colorsSoft[i - 1];
    }
    colorsSoft[0] = lastColor;

    // Interpolate the hue for the first LED of each color block
    float startHue = colorsSoft[posOfFirstLed].H;
    float endHue = colorsSoft[(posOfFirstLed + 1)].H;
    interpolateHueForFirstLedOfEachColorBlock(colorsSoft[posOfFirstLed], startHue, endHue, transitionSteps, transitionDelay);

    posOfFirstLed = (posOfFirstLed + 1) % 6;


}


