//Authors: Abdullah_Zammeer_200940, Aizaz_Ul_Haq_200931, Daniyal_Shahzad_190775, Muhammad_Sheryar_200959


const int buzzerPin = 9;

const int ldrPin = A0;

void setup () {

Serial.begin(9600);


pinMode(buzzerPin, OUTPUT);

pinMode(ldrPin, INPUT);

}

void loop() {

int ldrStatus = analogRead(ldrPin);

if (ldrStatus <= 400) {

tone(buzzerPin, 1000, 10000);

delay(100);

noTone(buzzerPin);


delay(100);

Serial.println("BEEEEEEEEEEEEPPPPPPP");

}

else {

noTone(buzzerPin);

Serial.println("ALARM DEACTIVATED");

}

}
