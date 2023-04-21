#include <Arduino.h>

#define notification 2
#define red 2
#define green 3

void setup() {
  pinMode(notification, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);

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
      digitalWrite(red, HIGH);
      delay(400);
      Serial.println("no ring");
      digitalWrite(red, LOW);
      delay(900);
    }
}
