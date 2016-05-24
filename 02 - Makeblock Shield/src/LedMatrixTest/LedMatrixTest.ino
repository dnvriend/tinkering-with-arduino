/**
 * reads from the light sensor attached to port 8
 * writes to the led matrix attached to port 7
 * and writes to the 7 segment display attached to port 3
 */
#include "MeShield.h"

MeLEDMatrix ledMx(PORT_7);
MeLightSensor lightSensor(PORT_8);
Me7SegmentDisplay disp(PORT_3);
int value = 0;      // a variable for the light sensor's value

void setup() {
  ledMx.setBrightness(6);
  ledMx.setColorIndex(2);
}

void loop() {
  value = lightSensor.read();
  ledMx.showNum(value);
  disp.display(value);  
  delay(32);
}

