#include <Arduino.h>

#define bazzerd 11

void setup() {
  pinMode(bazzerd, OUTPUT);
  Serial.begin(9600);
}
void notice();

void loop() {
  delay(1000 * 60 * 30);  // 30m
  notice();
  delay(1000 * 60 * 5); // 5m
  notice();
}

void notice() {
    for (int i = 0;i<3;i++){
      Serial.println("ring");
      digitalWrite(bazzerd, HIGH);
      delay(400);
      Serial.println("no ring");
      digitalWrite(bazzerd, LOW);
      delay(900);
    }
}
