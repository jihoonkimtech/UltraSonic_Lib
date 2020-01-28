/*
 * -UltraSonic Distance Sensor Library-
 * 			for HC-SR04
 *
 * this cpp file for UltraSonic Distance Sensor Library
 *
 * author jihoonkimtech (jihoonkimtech@naver.com)
 *			(Republic of Korea)
 * version  V0.0.4
 * date  2020-01-29
*/

#include "UltraSonic.h"

UltraSonic::UltraSonic(int pintype, int pin_one, int pin_two = 0){
	
	_pinType = pintype;
	
	if(pintype == THREE_PIN){
		_sigPin = pin_one;
		//pinMode(_sigPin, OUTPUT);
	} else {
		_trigPin = pin_one;
		_echoPin = pin_two;
		pinMode(_trigPin, OUTPUT);
		pinMode(_echoPin, INPUT);
	}	
}

void UltraSonic::sensing(int legthType){
	
	long duration;
	float distance;
	
	if(_pinType == THREE_PIN){
		pinMode(pingPin, OUTPUT);
		digitalWrite(_sigPin, LOW);
  		delayMicroseconds(2);
  		digitalWrite(_sigPin, HIGH);
  		delayMicroseconds(5);
  		digitalWrite(_sigPin, LOW);
  		
  		pinMode(pingPin, INPUT);
  		duration = pulseIn(pingPin, HIGH);
	} else {
		digitalWrite(_trigPin, LOW);
		delayMicroseconds(2);
	
		digitalWrite(_trigPin, HIGH);
		delayMicroseconds(10);
		digitalWrite(_trigPin, LOW);
	
		duration = pulseIn(_echoPin, HIGH);
	}
	
	distance = (duration/2) / 29.1;
	
	if(legthType == INCH)
		distance = (duration/2) / 74;
	else if(legthType == FEET)
		distance = (distance / 10) * 3.28;
	else if(legthType == METER)
		distance =  distance/10;
	else if(legthType == MM)
		distance *= distance*10;
	
	_distance = distance;
}


float UltraSonic::ensureDist(int ms = 0, int legthType = 1){
	sensing(legthType);
	delay(ms);
	return _distance;
}


void UltraSonic::distPrint(int ms = 0, int legthType = 1){
	sensing(legthType);
	Serial.print("distance : ");
	Serial.print(_distance);
	if()
	
	
	if(legthType == INCH)
		Serial.println(" in");
	if(legthType == FEET)
		Serial.println(" ft");
	if(legthType == METER)
		Serial.println(" m");
	if(legthType == MM)
		Serial.println(" mm");
	else
		Serial.println(" cm");
		
	delay(ms);
}
