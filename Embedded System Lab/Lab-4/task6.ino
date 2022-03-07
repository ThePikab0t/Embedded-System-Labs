//Authors: Abdullah Zameer, Aizaz Ul Haq, Muhammad SHeryar Khan, Daniyal Shahzad

// constants won’t change. They’re used here to
// set pin numbers:
const int buttonFast = 7;    // the number of the fast button pin
const int buttonSlow = 8;    // the number of the slow button pin
const int ledPin =  13;      // the number of the LED pin

// Variables will change:
int ledState = LOW;             // ledState used to set the LED
int buttonState;             // the current reading from the input pin
int lastButtonState = LOW;   // the previous reading from the input pin

// Generally, you should use "unsigned long" for variables that hold time
// The value will quickly become too large for an int to store
unsigned long LastTime = 0;        // will store last time LED was updated

// constants won't change:
const long interval = 1000;           // interval at which to blink (milliseconds)
const long fast = 50;
const long slow = 5000;

void setup() {
  pinMode(buttonFast, INPUT);
  pinMode(buttonSlow, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  unsigned long CurrentTime = millis();
  if ((digitalRead(buttonFast) == LOW) && (digitalRead(buttonSlow)) == LOW) {
    if (CurrentTime - LastTime >= interval) {
      // save the last time you blinked the LED
      LastTime = CurrentTime;

      // if the LED is off turn it on and vice-versa:
      if (ledState == LOW) {
        ledState = HIGH;
      } else {
        ledState = LOW;
      }

      // set the LED with the ledState of the variable:
      digitalWrite(ledPin, ledState);
    }
  }
  if ((digitalRead(buttonFast) == HIGH) && (digitalRead(buttonSlow) == LOW)) {
    if (CurrentTime - LastTime >= fast) {
      // save the last time you blinked the LED
      LastTime = CurrentTime;

      // if the LED is off turn it on and vice-versa:
      if (ledState == LOW) {
        ledState = HIGH;
      } else {
        ledState = LOW;
      }

      // set the LED with the ledState of the variable:
      digitalWrite(ledPin, ledState);
    }
  }
  if ((digitalRead(buttonFast) == LOW) && (digitalRead(buttonSlow)) == HIGH) {
    if (CurrentTime - LastTime >= slow) {
      // save the last time you blinked the LED
      LastTime = CurrentTime;

      // if the LED is off turn it on and vice-versa:
      if (ledState == LOW) {
        ledState = HIGH;
      } else {
        ledState = LOW;
      }

      // set the LED with the ledState of the variable:
      digitalWrite(ledPin, ledState);
    }
  }
}
