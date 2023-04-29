/*
This is a program for controlling a set of four LEDs using a push button.
The LEDs are connected to pins 5, 6, 7, and 8 of an Arduino board.
The push button is connected to pin 2. Each time the push button is pressed,
the next LED in the sequence is turned on, while the previous LED is turned off.
If the last LED is turned off, the sequence starts over from the beginning.
The program uses the PushButton and Led classes.
Main theme is the use of two classes combined together. 
*/
#include "PushButton.h"// Include the PushButton class header file
#include "Led.h"// Include the Led class header file

const int _pin[] = {5, 6, 7, 8};// Create an array to hold the pin numbers for the LEDs

Led leds(_pin);// Create an instance of the Led class with the pin numbers
PushButton button(2);// Create an instance of the PushButton class with pin number 2
int count;// Initialize a variable to hold the count value

void setup() { // CODE RUNS ONCE 
  button.init();// Call the init function of the PushButton class to set the pin as input and set up Serial communication
}
void loop() {// CODE RUNS IN A LOOP 
  button.state();// Call the state function of the PushButton class to check if the button has been pressed and update the count
  int count = button.getCount();// Get the count value from the PushButton class
  leds.displayCount(count);// Display the count value using the Led class
}

