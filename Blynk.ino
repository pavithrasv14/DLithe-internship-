#define BLYNK_TEMPLATE_ID "TMPL3ipAfKcLP"
#define BLYNK_TEMPLATE_NAME "LED"
#define BLYNK_AUTH_TOKEN "i5P7O-4BpWlJuWhyf4rlidlCkdtX0mpn"
#define BLYNK_PRINT Serial
#include<WiFi.h>
#include<BlynkSimpleEsp32.h>

char auth[] = "i5P7O-4BpWlJuWhyf4rlidlCkdtX0mpn";
char ssid[] = "smart";
char pass[] = "123456789";

BLYNK_WRITE(V0){
  int pinvalue=param.asInt();
  digitalWrite(35,pinvalue);
}
void setup() {
 Serial.begin(9600);
 pinMode(35,OUTPUT);
 WiFi.begin(ssid,pass);
 while(WiFi.status() != WL_CONNECTED){
  delay(500);
  Serial.println("Not connected");
 }
 Serial.println("Connected");
 Blynk.begin(auth,ssid,pass);

}

void loop() {
  Blynk.run();
}
