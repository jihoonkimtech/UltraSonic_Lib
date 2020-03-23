/*
 * UltraSonic.h
 * UltraSonic Distance Sensor Library
 * 
 * for 1.0.1
 */

//including UltraSonic header File
#include <UltraSonic.h>

//make UltraSonic Object
//UltraSonic [Object Name]([PIN_TYPE],[Trig], [Echo]);
//PIN_TYPE : THREE_PIN(sig) , FOUR_PIN(echo.gnd)
UltraSonic us_sensor(FOUR_PIN, 7, 6);

void setup() {
  Serial.begin(9600);
}

void loop() {

  //distPrint()
  //Serial printing distance Value ("distance : [value] cm\n")
  us_sensor.distPrint();
  delay(1000);

  //distPrint(int ms, int LENGTH_TYPE)
  //Serial printing distance Value ("distance : [value] [LENGTH_TYPE]\n")
  //LENGTH_TYPE FEET(ft), CM(cm), MM(mm), INCH(in), METER(m). //default = CM
  //+ delay(ms) //default = 0
  us_sensor.distPrint(1000, CM);

  //ensureDist()
  //sensing distance and return distance value(default float type)
  int distInt = us_sensor.distByInt(); //auto-casting
  
  //+ delay(ms)
  int distInt = us_sensor.distByInt(1000); //auto-casting


  float distFloat = us_sensor.distByFloat(); //normal use

  //+ delay(ms)
  float distFloat = us_sensor.distByFloat(1000);

}
