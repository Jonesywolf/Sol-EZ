// This is an example sketch for the Sol-EZ solenoid kit,
// details can be found below:
// https://www.instructables.com/id/Sol-EZ-Solenoid-Driver-Kit-Usage-Guide

// connect the Sol-EZ driver to digital pin 3
#define SOLEZ_PIN 3

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(SOLEZ_PIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(SOLEZ_PIN, HIGH);   // turn the solenoid on (HIGH is the voltage level)
  delay(3000);                     // wait for 3 seconds
  digitalWrite(SOLEZ_PIN, LOW);    // turn the solenoid off by making the voltage LOW
  delay(3000);                     // wait for 3 seconds
}
