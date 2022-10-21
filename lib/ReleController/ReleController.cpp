#include <Arduino.h>
#include <ReleController.h>

ReleController::ReleController(Rele * reles[], int size){
  _reles=reles;
  _size=size;
};

void ReleController::process(String command){
  for (int i = 0; i < _size; i++)
  {
    String commandOn=_reles[i]->getTag()+":ON";
    String commandOff=_reles[i]->getTag()+":OFF";

    if(command==commandOn){
      _reles[i]->activate();
    }
    if(command==commandOff){
      _reles[i]->deactivate();
    }
  }
  
}
