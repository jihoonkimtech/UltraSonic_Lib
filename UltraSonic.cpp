/*
 * -UltraSonic Distance Sensor Library-
 * 			for HC-SR04
 *
 * this cpp file for UltraSonic Distance Sensor Library
 *
 * author jihoonkimtech (jihoonkimtech@naver.com)
 *			(Republic of Korea)
 * version  V1.0.1
 * date  2020-02-12
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
		pinMode(_sigPin, OUTPUT);
		digitalWrite(_sigPin, LOW);
  		delayMicroseconds(2);
  		digitalWrite(_sigPin, HIGH);
  		delayMicroseconds(5);
  		digitalWrite(_sigPin, LOW);
  		
  		pinMode(_sigPin, INPUT);
  		duration = pulseIn(_sigPin, HIGH);
	} else {
		digitalWrite(_trigPin, LOW);
		delayMicroseconds(2);
		digitalWrite(_trigPin, HIGH);
		delayMicroseconds(5);
		digitalWrite(_trigPin, LOW);
	
		duration = pulseIn(_echoPin, HIGH);
	}
	
	distance = (duration/2) / 29.1; //cm
	
	if(legthType == INCH)
		distance = (duration/2) / 74;
	else if(legthType == FEET)
		distance = (distance / 10) * 3.28;
	else if(legthType == METER)
		distance =  distance/10;
	else if(legthType == MM)
		distance = distance*10;
	
	_distance = distance;
}


float UltraSonic::mesureDist(int ms = 0, int legthType = 0){
	sensing(legthType);
	delay(ms);
	return _distance;
}


void UltraSonic::distPrint(int ms = 0, int legthType = 0){
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
