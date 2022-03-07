//Authors: Abdullah Zameer, Aizaz Ul Haq, Muhammad Sheryar, Daniyal Shahzad
//Task 6
int pirPin = 2; // PIR Out pin
int pirStat = LOW; // PIR status
int buzzerPin = 3;
void setup() {
pinMode(buzzerPin, OUTPUT);
pinMode(pirPin, INPUT);
Serial.begin(9600);

}
void loop(){
  pirStat = digitalRead(pirPin);

  if (pirStat == HIGH) { // if motion detected
  attachInterrupt(digitalPinToInterrupt(pirStat), interrupt, RISING);
  }
}

void interrupt(){
  digitalWrite(buzzerPin, HIGH);
  tone(buzzerPin, 5000, 1);
  Serial.println("Alert: Motion is detected!!!");
}
