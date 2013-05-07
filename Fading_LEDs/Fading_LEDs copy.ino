/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
const int pin1 = 3;
const int pin2 = 11;
const int pin3 = 9;
const int pin4 = 10;
const int waittime = 10000;


void setup() {                
  // initialize the digital pin as an output.
  pinMode(pin1, OUTPUT);     
  pinMode(pin2, OUTPUT); 
  pinMode(pin3, OUTPUT); 
  pinMode(pin4, OUTPUT);
  TCCR2A = _BV(COM2A1) | _BV(COM2B1) | _BV(WGM20);
  TCCR2B = _BV(CS22);
  TCCR1A = _BV(COM2A1) | _BV(COM2B1) | _BV(WGM20);
  TCCR1B = _BV(CS22);
}

void loop() { 

    OCR2A = random(255);
    OCR2B = random(255);
    OCR1A = random(255);
    OCR1B = random(255);
    
    delay(waittime);   
}
