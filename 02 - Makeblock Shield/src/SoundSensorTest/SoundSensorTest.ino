/**
 * reads from the sound sensor connected to port 8
 * and writes to the 7 segment display connected to port 3
 */
#include "MeShield.h"

MeSoundSensor mySound(PORT_8);
Me7SegmentDisplay disp(PORT_3);

void setup() {
}

void loop() {
  disp.display(mySound.strength());
  delay(32);
}

