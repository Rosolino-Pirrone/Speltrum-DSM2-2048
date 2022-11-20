// Confirmed working on Arduino Adafruit Feather Blufruit M0

#include "SatelliteReceiver.h"

SatelliteReceiver Rx;

void setup() {
  
  Serial.begin(115200);
  Serial1.begin(115200);
}

void loop() {
  Rx.getFrame();
}
