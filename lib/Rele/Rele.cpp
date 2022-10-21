#include <Arduino.h>
#include <Rele.h>

Rele::Rele(String tag,int digitalPin){
  _tag=tag;
  _digitalPin=digitalPin;
  _isActive=false;
  pinMode(_digitalPin,OUTPUT);
  digitalWrite(_digitalPin,LOW);

}

void Rele::activate(){
  _isActive=true;
  digitalWrite(_digitalPin,HIGH);
}

void Rele::deactivate(){
  _isActive=false;
  digitalWrite(_digitalPin,LOW);
}

String Rele::print(){
  return _tag+":"+_isActive;
}

String Rele::getTag(){
  return _tag;
}

boolean Rele::isActive(){
  return _isActive;
}
