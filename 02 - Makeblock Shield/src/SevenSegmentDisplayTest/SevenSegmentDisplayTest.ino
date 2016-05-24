/**
 * controls the 7 segment display 
 */
#include "MeShield.h"

Me7SegmentDisplay disp(PORT_3);

int i = 0;
void setup() {
}

void loop() {
  if(i > 255) {
    i = 0;
  }
  disp.display(i++);
  delay(35);
}

