#ifndef SensorCo2_h
#define SensorCo2_h

#include <Arduino.h>
#include <Sensor.h>

class SensorCo2 : public Sensor
{
private:
  int _pinAnalog;
public:
  SensorCo2(String tag, int pinAnalog);
  long read();
};

#endif

