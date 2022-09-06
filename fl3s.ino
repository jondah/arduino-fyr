/*
 * Jonas Dahlgren
 * Lighthous LED FL(1) 3S
 */

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(1, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(700);              // wait for 0,7 second
  digitalWrite(1, LOW);    // turn the LED off by making the voltage LOW
  delay(3000);              // wait for 3 seconds

}