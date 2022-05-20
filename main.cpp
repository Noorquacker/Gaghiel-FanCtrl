#include <Arduino.h>
#include <HardwareSerial.h>

int led = 5;           // the PWM pin the LED is attached to
int brightness = 0;    // how bright the LED is
int fadeAmount = 1;    // how many points to fade the LED by

unsigned long t;


void setup() {

  pinMode(led, OUTPUT);
  analogWrite(led, 0);
  Serial.begin(115200);
}


void loop() {

  analogWrite(led, 0);
  



  // stock fade code
  brightness = brightness + fadeAmount;
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
//  delay(100);
}
