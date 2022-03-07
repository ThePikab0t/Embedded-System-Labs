int outRead = 8;
void setup()
{
pinMode(outRead, OUTPUT);
Serial.begin(9600);
}
void loop()
{
if (Serial.available() > 0)
{
char state = Serial.read();
if (state == '1')
{
digitalWrite(outRead, HIGH);
}

if (state == '0')
{
digitalWrite(outRead, LOW);
}
}
}
