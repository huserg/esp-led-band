#include "ChristmasTech.h"
#include "../LedPatterns.h"

extern NeoPixelBus<NeoGrbFeature, NeoWs2812xMethod> strip; // Utilisez `extern` pour accéder à l'instance `strip` définie ailleurs
extern HslColor hslRed;
extern HslColor hslGreen;
extern HslColor hslBlack;

const int techDelayTime = 100; // vitesse de défilement des couleurs

HslColor colorsRedGreen[] = {hslRed, hslGreen}; // Définir les couleurs à utiliser
int numOfColorsRedGreen = sizeof(colorsRedGreen) / sizeof(colorsRedGreen[0]); // Calculer le nombre de couleurs
HslColor colorsRedBlack[] = {hslRed, hslBlack}; // Définir les couleurs à utiliser
int numOfColorsRedBlack = sizeof(colorsRedBlack) / sizeof(colorsRedBlack[0]); // Calculer le nombre de couleurs
HslColor colorsGreenBlack[] = {hslBlack, hslGreen}; // Définir les couleurs à utiliser
int numOfColorsGreenBlack = sizeof(colorsGreenBlack) / sizeof(colorsGreenBlack[0]); // Calculer le nombre de couleurs

HslColor colorsGreenRed[] = {hslGreen, hslRed}; // Définir les couleurs à utiliser
int numOfColorsGreenRed = sizeof(colorsGreenRed) / sizeof(colorsGreenRed[0]); // Calculer le nombre de couleurs
HslColor colorsBlackRed[] = {hslBlack, hslRed}; // Définir les couleurs à utiliser
int numOfColorsBlackRed = sizeof(colorsBlackRed) / sizeof(colorsBlackRed[0]); // Calculer le nombre de couleurs
HslColor colorsBlackGreen[] = {hslGreen, hslBlack}; // Définir les couleurs à utiliser
int numOfColorsBlackGreen = sizeof(colorsBlackGreen) / sizeof(colorsBlackGreen[0]); // Calculer le nombre de couleurs




void ChristmasTech() {

    // all colors red and green 
    SetLEDAndDisplay(3, numOfColorsRedGreen, colorsRedGreen, strip.PixelCount()); 
    delay(techDelayTime);

    // turn off the pixels
    SetLEDOff(strip.PixelCount());
    delay(techDelayTime);

    // only red  
    SetLEDAndDisplay(3, numOfColorsRedBlack, colorsRedBlack, strip.PixelCount()); 
    delay(techDelayTime);

    // turn off the pixels
    SetLEDOff(strip.PixelCount());
    delay(techDelayTime);

    // only red  
    SetLEDAndDisplay(3, numOfColorsBlackRed, colorsBlackRed, strip.PixelCount()); 
    delay(techDelayTime);

    // turn off the pixels
    SetLEDOff(strip.PixelCount());
    delay(techDelayTime);

    // all colors red and green 
    SetLEDAndDisplay(3, numOfColorsGreenRed, colorsGreenRed, strip.PixelCount()); 
    delay(techDelayTime);

    // turn off the pixels
    SetLEDOff(strip.PixelCount());
    delay(techDelayTime);

    // only green  
    SetLEDAndDisplay(3, numOfColorsGreenBlack, colorsGreenBlack, strip.PixelCount());
    delay(techDelayTime);

    // turn off the pixels
    SetLEDOff(strip.PixelCount());
    delay(techDelayTime);

    // only green  
    SetLEDAndDisplay(3, numOfColorsBlackGreen, colorsBlackGreen, strip.PixelCount());
    delay(techDelayTime);

    // turn off the pixels
    SetLEDOff(strip.PixelCount());
    delay(techDelayTime);
}