#include <Arduino.h>
#include <Sensor.h>

Sensor::Sensor(String tag){
  _tag=tag;
}

String Sensor::print(){
  long value = read();
  return _tag+":"+value;
}