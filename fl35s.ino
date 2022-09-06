/*
 LED fyr exempel FL(3) 5s
 */

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 1 as an output.
  pinMode(1, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(700);              // wait for 0,7 seconds
  digitalWrite(1, LOW);    // turn the LED off by making the voltage LOW
  delay(700);              // wait for 0,7 seconds
  digitalWrite(1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(700);              // wait for 0,7 seconds
  digitalWrite(1, LOW);    // turn the LED off by making the voltage LOW
  delay(700);              // wait for 0,7 seconds
  digitalWrite(1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(700);              // wait for 0,7 seconds
  digitalWrite(1, LOW);    // turn the LED off by making the voltage LOW
  delay(5000);             // wait for 5 seconds
}