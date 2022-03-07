//Author: Abdullah Zameer, Aizaz-Ul-Haq, Daniyal_Shahzad,  Muhammad Sheryar Khan
//ID: 200940, 200931, 190775, 200959

// Task 1
int outRead = 8;
int outRead1 = 4;

void setup()
{
pinMode(outRead, OUTPUT);
pinMode(outRead1, OUTPUT);
Serial.begin(9600);
}
void loop()
{
  if (Serial.available() > 0)
  {
    
    char state = Serial.read();
     if (state == '0')
    {
      digitalWrite(outRead, LOW);
      digitalWrite(outRead1, LOW);
    }
    if (state == '1')
    {
      digitalWrite(outRead, HIGH);
    }

    if (state == '2')
    {
      digitalWrite(outRead, LOW);
    }
    
    if (state == '3')
    {
      digitalWrite(outRead1, HIGH);
    }
        
    if (state == '4')
    {
      digitalWrite(outRead1, LOW);
    }
    if (state == '5')
    {
      digitalWrite(outRead, HIGH);
      digitalWrite(outRead1, HIGH);
    }
        
    
  }
}
