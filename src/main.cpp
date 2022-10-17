#include <Arduino.h>
#include <SensorUltrasonic.h>
#include <SensorCo2.h>

int us1_pinEcho=6;
int us1_pinTrigger=7;
SensorUltrasonic sensor_tanque("S_TANQUE",us1_pinEcho,us1_pinTrigger);

int co2_pinAnalog=A2;
SensorCo2 sensor_c02("S_CO2",co2_pinAnalog);

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(sensor_tanque.print()+'|'+sensor_c02.print());
  delay(500);
}


