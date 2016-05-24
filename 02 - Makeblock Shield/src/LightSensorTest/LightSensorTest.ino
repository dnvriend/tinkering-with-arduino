/**
 * reads from the light sensor that has been attached to port 7
 * and writes the light sensor result to the 7 segment display that has been attached to port 3
 */
#include "MeShield.h"

MeLightSensor lightSensor(PORT_7);
Me7SegmentDisplay disp(PORT_3);
int value = 0;      // a variable for the light sensor's value

void setup() {
}

void loop() {
  // read the light sensor value:
  value = lightSensor.read();

  // writes the light sensor value to the 7 segment display
  disp.display(value);
  // wait 100 milliseconds before the next loop
  delay(35);
}

