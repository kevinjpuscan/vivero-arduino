#ifndef ReleController_h
#define ReleController_h

#include <Arduino.h>
#include <Rele.h>

class ReleController
{
private:
  Rele * *_reles;
  int _size;
public:
  ReleController(Rele * reles[], int size);
  void process(String command);
};

#endif

