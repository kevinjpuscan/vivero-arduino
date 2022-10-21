#ifndef Rele_h
#define Rele_h

#include <Arduino.h>

class Rele
{
private:
  int _digitalPin;
  String _tag;
  boolean _isActive;
public:
  Rele(String tag, int digitalPin);
  void activate();
  void deactivate();
  virtual String print();
  virtual String getTag();
  virtual boolean isActive();
};

#endif
