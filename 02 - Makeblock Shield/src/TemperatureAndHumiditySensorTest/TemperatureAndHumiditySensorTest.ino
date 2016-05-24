/**
 * reads from the humidity/temperature sensor connected to port 6
 * and writes to the 7 segment display connected to port 3
 * It uses the left 2 digits to display the humidity in %
 * It uses the right 2 digits to display the temperature in Celcius
 */
#include "MeShield.h"

MeHumiture humiture(PORT_6);
Me7SegmentDisplay disp(PORT_3);

void setup() {
}

void loop() {
  humiture.update();
  disp.display(humiture.getHumidity() * 100 + humiture.getTemperature());
  delay(35);
}
