/* Blink three LEDs
 */

// constants won't change. Used here to 
// set pin numbers:
const int redPin = 12;      // pin used for red LED
const int greenPin = 13;      // pin used for green LED
const int bluePin = 14;      // pin used for blue LED

// Variables will change:
int redState = LOW;             // ledState1 used to set the first LED
int greenState = LOW;
int blueState = LOW;

long previousMillis = 0;        // will store last time LED was updated

// the follow variables is a long because the time, measured in miliseconds,
// will quickly become a bigger number than can be stored in an int.
long interval = 100;           // interval at which to blink (milliseconds)
int delta = 1;  
int colour = 0;

void setup() {
  // set the digital pin as output:
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);  
  pinMode(bluePin, OUTPUT);   

}

void loop()
{
  // here is where you'd put code that needs to be running all the time.

  // check to see if it's time to blink the LED; that is, if the 
  // difference between the current time and last time you blinked 
  // the LED is bigger than the interval at which you want to 
  // blink the LED.
  unsigned long currentMillis = millis();
 
  if(currentMillis - previousMillis > interval) {
    // save the last time you blinked the LED 
    previousMillis = currentMillis;   

    colour = colour + delta;
    
    if(colour == 0 or colour == 8) {
      delta = 0 - delta;
    }

    if ( (colour + 1) % 2 > 0 ) {
      redState = HIGH;
    }
    else
    {
      redState = LOW;
    }
    
    if ( (colour + 1) % 4 > 0 ) {
      greenState = HIGH;
    }
    else
    {
      greenState = LOW;
    }
    
    if ( (colour + 1) % 8 > 0 ) {
      blueState = HIGH;
    }
    else
    {
      blueState = LOW;
    }
    
    // set the LED with the ledState of the variable:
    digitalWrite(redPin, redState);
    digitalWrite(greenPin, greenState);
    digitalWrite(bluePin, blueState);
  }
}

