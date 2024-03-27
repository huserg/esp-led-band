#include <Arduino.h>
#include <NeoPixelBus.h>
#include <LedPatterns/Basic/PlainColors.h>
#include "LedPatterns/Christmas/ChristmasSoft.h"
#include "LedPatterns/Christmas/ChristmasTech.h"

// Config 
const uint16_t PixelCount = 78; 
const uint8_t PixelPin = 12; 

// init
NeoPixelBus<NeoGrbFeature, NeoWs2812xMethod> strip(PixelCount, PixelPin);


void setup() {
  Serial.begin(115200);
  while (!Serial); // wait for serial attach

  Serial.println("Initializing LED band...");

  // this resets all the neopixels to an off state
  strip.Begin();
  strip.Show();

  Serial.println("Running...");

}

void loop() {

  PlainPurple();
  //ChristmasSoft();

}
