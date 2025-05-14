#include <FastLED.h>

#define LED_PIN     6        // Pin connected to data line of LED strip
#define NUM_LEDS    144*3       // Total number of LEDs in your strip
#define BRIGHTNESS  255      // Set brightness (0-255)
#define LED_TYPE    WS2812B  // Adjust if using a different type
#define COLOR_ORDER GRB

CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<LED_TYPE, LED_PIN, COLOR_ORDER>(leds, NUM_LEDS);
  FastLED.setBrightness(BRIGHTNESS);

  // Set all LEDs to red
  fill_solid(leds, NUM_LEDS, CRGB::Red);
  FastLED.show();
}

void loop() {
  // Nothing to do here
}