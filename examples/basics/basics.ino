/*
 * UltraSonic.h
 * UltraSonic Distance Sensor Library
 */

//including UltraSonic header File
#include <UltraSonic.h>

//make UltraSonic Object
//UltraSonic [Object Name]([PIN_TYPE],[Trig], [Echo]);
//PIN_TYPE : THREE_PIN(sig) , FOUR_PIN(echo.gnd)
UltraSonic us(FOUR_PIN, 7, 6);

void setup() {
  Serial.begin(9600);
}

void loop() {

  //distPrint()
  //Serial printing distance Value ("distance : [value] cm\n")
  us.distPrint();
  delay(1000);

  //distPrint(LENGTH_TYPE,int ms)
  //Serial printing distance Value ("distance : [value] [LENGTH_TYPE]\n")
  //LENGTH_TYPE FEET(ft), CM(cm), MM(mm), INCH(in), METER(m). //default = CM
  //+ delay(ms) //default = 0
  us.distPrint(CM, 1000);

  //ensureDist()
  //sensing distance and return distance value(default float type)
  int distInt = us.distByInt(); //auto-casting
  
  //+ delay(ms)
  int distInt = us.distByInt(1000); //auto-casting


  float distFloat = us.distByFloat(); //normal use

  //+ delay(ms)
  float distFloat = us.distByFloat(1000);

}
