/*

Colour-changing LEDs

With up to four LEDs connected to each of the PWM-capable pins of an Arduino their brightness
can be varied.

*/
 
const int pin1 = 3;
const int pin2 = 11;
const int pin3 = 9;
const int pin4 = 10;
const int waittime = 10;
int newvalue1 = 0;
int newvalue2 = 0;
int newvalue3 = 0;
int newvalue4 = 0;
int difference1 = 0;
int difference2 = 0;
int difference3 = 0;
int difference4 = 0;
int brightness1 = 0;
int brightness2 = 0;
int brightness3 = 0;
int brightness4 = 0;
int loopcounter = 0;


void setup() {                
  // initialize the digital pin as an output.
  pinMode(pin1, OUTPUT);     
  pinMode(pin2, OUTPUT); 
  pinMode(pin3, OUTPUT); 
  pinMode(pin4, OUTPUT);
  // Set Timer/Counter Control Registers A/B for Timer/Counter 1/2
  TCCR2A = _BV(COM2A1) | _BV(COM2B1) | _BV(WGM20);
  TCCR2B = _BV(CS22);
  TCCR1A = _BV(COM2A1) | _BV(COM2B1) | _BV(WGM20);
  TCCR1B = _BV(CS22);
}

void loop() { 
    // Set each value to a random number between 0 and 255 
    newvalue1 = random(256);
    newvalue2 = random(256);
    newvalue3 = random(256);
    newvalue4 = random(256);
    
    // Calculate how much each LED's brightness needs to change
    difference1 = newvalue1 - brightness1;
    difference2 = newvalue2 - brightness2;
    difference3 = newvalue3 - brightness3;
    difference4 = newvalue4 - brightness4;

    // Over the course of 100 steps, increment/decrement each LEDs brightness accordingly
    for ( loopcounter = 0; loopcounter < 100; loopcounter++) {
      brightness1 += (difference1 / 100);
      brightness2 += (difference2 / 100);
      brightness3 += (difference3 / 100);
      brightness4 += (difference4 / 100);
      OCR2A = brightness1;
      OCR2B = brightness2;
      OCR1A = brightness3;
      OCR1B = brightness4;
      delay(waittime); 
    }
  
}
