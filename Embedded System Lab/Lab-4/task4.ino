//Authors: Abdullah Zameer, Aizaz Ul Haq, Muhammad SHeryar Khan, Daniyal Shahzad

void setup() {
pinMode(ledPin, OUTPUT);
pinMode(interruptPin, INPUT_PULLUP);
attachInterrupt(digitalPinToInterrupt(interruptPin), blink, RISING);
}
void loop() {
}
void blink() {
if(state)
{
state = false;
digitalWrite(13,LOW);
}else
{
state = true;
digitalWrite(13,HIGH);
}
}
