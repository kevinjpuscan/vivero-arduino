#include <Arduino.h>
#include <SensorCo2.h>

SensorCo2::SensorCo2(String tag,int pinAnalog):Sensor(tag){
  _pinAnalog=pinAnalog;
}

long SensorCo2::read(){
  return analogRead(_pinAnalog);
}