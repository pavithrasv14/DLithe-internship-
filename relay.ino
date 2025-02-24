void setup()
{
Serial.begin(9600);
pinMode(42,OUTPUT);
pinMode(6,OUTPUT);
pinMode(5,OUTPUT);
}
void loop()
{
digitalWrite(42,HIGH);
digitalWrite(6,LOW);
digitalWrite(5,LOW);
Serial.println("led is on");
Serial.println("relay is off");
delay(1000);
digitalWrite(42,LOW);
digitalWrite(6,HIGH);
digitalWrite(5,HIGH);
Serial.println("led is off");
Serial.println("relay is on");
delay(1000);
}
