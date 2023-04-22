#include <Arduino.h>

#define bazzerd 11

const int th_min = 1800000000; // 30m
const int fi_min = 300000000; // 5m

void setup() {
  pinMode(bazzerd, OUTPUT);

  Serial.begin(9600);
}
void notice(int count = 3);

void loop() {
  notice(1);
  delay(th_min);  // 30m
  notice();
  delay(fi_min); // 5m
  notice();
}

void notice(int count = 3) {
    for (int i = 0;i<count;i++){
      Serial.println("ring");
      digitalWrite(bazzerd, HIGH);
      delay(400);
      Serial.println("no ring");
      digitalWrite(bazzerd, LOW);
      delay(900);
    }
}
