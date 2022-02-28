const int  buttonPin1 = 7;    // the pin that the pushbutton is attached to
const int ledPin1 = 13;       // the pin that the LED is attached to
const int  buttonPin2 = 4;    // the pin that the pushbutton is attached to

void setup() {
  pinMode(buttonPin1, INPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(buttonPin2,INPUT);
}


void loop() {
  // read the pushbutton input pin:
  
   if ((digitalRead(buttonPin1) == HIGH) && (digitalRead(buttonPin2) == LOW)) {
   digitalWrite(ledPin1,HIGH);
   }

   if ((digitalRead(buttonPin1) == LOW)&&(digitalRead(buttonPin2)) == HIGH) {
   digitalWrite(ledPin1,LOW);
   }
}
