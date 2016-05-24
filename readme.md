## Digital Input and output
The Arduino has 14 digital pins, and can be used as an input or as an output. Each digital pin operates at 5 volts and can provide or receive a current of maximum 40 milli amps (mA). Each digital pin has an internal pull-up resistor, which is disconnected by default, of 20-50 kOhms. In addition, some pins have specialized functions:

* PWM 3,5,6,9,10,11:  Provide 8-bit [Pulse Width Modulation (PWM)](https://en.wikipedia.org/wiki/Pulse-width_modulation) output with the analogWrite() function.
* LED (13): There is a built-in LED connected to pin 13. When the pin is HIGH value, the LED is on, when the pin is LOW value, it's off.

## Analog Input
A0..A5 are 6 analog inputs, each of which provide 10 bits of resolution (1024 values). By default these measure from ground to 5 volts, though it is possible to change the upper end of their range using the AREF pin and the analogReference() function. Additionally, some pins have specialized functionality

* [Two Wire Interface](https://en.wikipedia.org/wiki/I%C2%B2C#Derivative_technologies): A4 or SDA pin and A5 or SCL pin: 

## Memory
The ATmega328 has 32kB of memory of which 0.5kB is used for the bootloader. It also has 2kB of [SRAM](https://en.wikipedia.org/wiki/Static_random-access_memory) and 1kB of [EEPROM](https://en.wikipedia.org/wiki/EEPROM). 
 
## Shields
[Shields](https://www.arduino.cc/en/Main/arduinoShields) are boards that can be plugged on top of the Arduino PCB extending its capabilities. The different shields follow the same philosophy as the original toolkit: they are easy to mount, and cheap to produce.

## Feathers
Feather is the new development board of Adafruit. The development boards are light and thin. Adafruit has developed the feather to be a new standard for mobile microcontrollers.


## Definitions

* [I2C](https://en.wikipedia.org/wiki/I%C2%B2C): Inter-Integrated Circuit, pronounced I-squared-C is used for attaching lower-speed peripherals to processors and microcontrollers in short-distance, intra-board communication. It is invented by Philips. 
* [TWI](https://en.wikipedia.org/wiki/I%C2%B2C#Derivative_technologies): Two Wire Interface is the same as I2C implemented on various system-on-chip processors from Atmel (eg. Arduino).
