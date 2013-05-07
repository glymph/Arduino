/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
const int greenpin = 2;
const int amberpin = 3;
const int redpin = 4;
const int waittime = 10000;


void setup() {                
  // initialize the digital pin as an output.
  pinMode(redpin, OUTPUT);     
  pinMode(amberpin, OUTPUT); 
  pinMode(greenpin, OUTPUT); 
}

void loop() {
  digitalWrite(redpin, HIGH);   
  delay(waittime);              
  digitalWrite(amberpin, HIGH);   
  delay(waittime/5);             
  digitalWrite(redpin, LOW); 
  digitalWrite(amberpin, LOW);              
  digitalWrite(greenpin, HIGH);  
  delay(waittime);             
  digitalWrite(greenpin, LOW);               
  digitalWrite(amberpin, HIGH);   
  delay(waittime/5);             
  digitalWrite(amberpin, LOW);                  
}
