/*
 * UltraSonic.h
 * UltraSonic Distance Sensor Library
 */

//including UltraSonic header File
#include <UltraSonic.h>

//make UltraSonic Object
//UltraSonic [Object Name]([Trig], [Echo]);
UltraSonic us(7, 6);

void setup() {
  Serial.begin(9600);
}

void loop() {

  //distPrint()
  //Serial printing distance Value ("distance : [value] cm\n")
  us.distPrint();
  delay(1000);

  //distPrint(int ms)
  //Serial printing distance Value ("distance : [value] cm\n")
  //+ delay(ms)
  us.distPrint(1000);

  //distByInt()
  //sensing distance and return distance value(int)
  int distInt = us.distByInt();
  
  //+ delay(ms)
  int distInt = us.distByInt(1000);

  //distByFloat()
  //sensing distance and return distance value(float)
  float distFloat = us.distByFloat();

  //+ delay(ms)
  float distFloat = us.distByFloat(1000);

}
