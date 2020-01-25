/*
 * UltraSonic.h
 * UltraSonic Distance Sensor Library
 */

#include <UltraSonic.h>

UltraSonic us(7, 6);

void setup() {
  Serial.begin(9600);
}

void loop() {

  us.distPrint();
  delay(1000);

  us.distPrint(1000);

  int distInt = us.distByInt();
  

  int distInt = us.distByInt(1000);

  float distFloat = us.distByFloat();

  float distFloat = us.distByFloat(1000);

}
