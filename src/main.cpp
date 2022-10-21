#include <Arduino.h>
#include <SensorUltrasonic.h>
#include <SensorCo2.h>
#include <Rele.h>
#include <ReleController.h>
#include <Rele.h>

int us1_pinEcho=6;
int us1_pinTrigger=7;
SensorUltrasonic sensor_tanque("S_TANQUE",us1_pinEcho,us1_pinTrigger);

int co2_pinAnalog=A2;
SensorCo2 sensor_c02("S_CO2",co2_pinAnalog);

int bom_pinDigital=13;
Rele rele_bomba("A_BOMBA",bom_pinDigital);
Rele * reles[]={&rele_bomba};
ReleController releController(reles,1);



void setup() {
  Serial.begin(9600);
}

void loop() {
  String command = Serial.readString(); 
  command.trim(); 
  releController.process(command);
  Serial.println(sensor_tanque.print()+"|"+sensor_c02.print()+"||"+rele_bomba.print());
  delay(500);

}


