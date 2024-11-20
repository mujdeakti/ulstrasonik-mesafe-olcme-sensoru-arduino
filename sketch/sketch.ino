int trig=5;
int echo=6;
long sure;
long uzaklik;
void setup() {
 pinMode(trig, OUTPUT);
 pinMode(echo, INPUT);
 Serial.begin(9600);
}

void loop() {
  digitalWrite(trig, LOW);
  delayMicroseconds(5);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  sure=pulseIn(echo,HIGH);
  uzaklik=sure/29.1/2;
  if(uzaklik>200)
  {
    uzaklik=200;
    Serial.print("UZAKLIK:");
    Serial.print(uzaklik);
    Serial.println("CM olarak olçülmüştür");
    delay(500);
  }
  else{
     Serial.print("UZAKLIK:");
    Serial.print(uzaklik);
    Serial.println("CM olarak olçülmüştür");
    delay(500);
  }

}
