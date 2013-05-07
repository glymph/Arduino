/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
const int outputpin1 = 2;
const int outputpin2 = 3;
const int outputpin3 = 4;
const int outputpin4 = 5;


void setup() {                
  // initialize the digital pin as an output.
  pinMode(outputpin1, OUTPUT);     
  pinMode(outputpin2, OUTPUT); 
  pinMode(outputpin3, OUTPUT); 
  pinMode(outputpin4, OUTPUT); 
}

void loop() {
  digitalWrite(outputpin1, HIGH);   // set first LED on
  delay(100);              // wait for 100 milliseconds
  digitalWrite(outputpin1, LOW);    // set first LED off
  delay(100);              // wait for 100 milliseconds
  digitalWrite(outputpin2, HIGH);   // set second LED on
  delay(100);              // wait for 100 milliseconds
  digitalWrite(outputpin2, LOW);   // set second LED off
  delay(100);              // wait for 100 milliseconds
  digitalWrite(outputpin3, HIGH);   // set third LED on
  delay(100);              // wait for 100 millisecond
  digitalWrite(outputpin3, LOW);   // set third LED off
  delay(100);              // wait for 100 milliseconds
  digitalWrite(outputpin2, HIGH);   // set second LED on
  delay(100);              // wait for 100 milliseconds
  digitalWrite(outputpin2, LOW);   // set second LED off
  delay(100);              // wait for 100 milliseconds 
}
