//Made in group task
//other group members names
//Abdullah_Zameer, Aizaz, Sheryar
//LAB_task 1
void setup()
{
	pinMode (2, OUTPUT);
	pinMode (4, OUTPUT);
}
void loop()
{
	digitalWrite(2,LOW);
	digitalWrite(4,HIGH);
	delay(2000);
	digitalWrite(4,LOW);
	digitalWrite(2,HIGH);
	delay(2000);
}