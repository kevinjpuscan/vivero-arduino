#ifndef Sensor_h
#define Sensor_h

#include <Arduino.h>

class Sensor
{
private:
  String _tag;
public:
  Sensor(String tag);
  virtual long read()=0;
  virtual String print();
};

#endif
