#ifndef SensorUltrasonic_h
#define SensorUltrasonic_h

#include <Arduino.h>
#include <Sensor.h>

class SensorUltrasonic : public Sensor 
{
  private:
    int _pinEcho;
    int _pinTrigger;
  public:
    SensorUltrasonic(String tag, int pinEcho,int pinTrigger);
    long read();
};

#endif