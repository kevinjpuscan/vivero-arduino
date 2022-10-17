#include <Arduino.h>
#include <SensorUltrasonic.h>

SensorUltrasonic::SensorUltrasonic(String tag,int pinEcho,int pinTrigger):Sensor(tag){
  _pinEcho=pinEcho;
  _pinTrigger=pinTrigger;

  pinMode(_pinEcho,INPUT);
  pinMode(_pinTrigger,OUTPUT);
}

long SensorUltrasonic::read(){
  digitalWrite(_pinTrigger,LOW);
  delayMicroseconds(2);
  digitalWrite(_pinTrigger,HIGH);
  delayMicroseconds(10);

  long duration=pulseIn(_pinEcho,HIGH);
  long distance=(duration/2)/29;
  if(distance>500){
    return 500;
  }
  if(distance<=0){
    return 0;
  };
  return distance;
}