/*
 * -UltraSonic Distance Sensor Library-
 * 			for HC-SR04
 *
 * this cpp file for UltraSonic Distance Sensor Library
 *
 * author jihoonkimtech (jihoonkimtech@naver.com)
 *			(Republic of Korea)
 * version  V0.0.4
 * date  2020-01-28
*/

#include "UltraSonic.h"

UltraSonic::UltraSonic(int pintype, int pin_one, int pin_two = 0){
	
	_pinType = pintype;
	
	if(pintype == THREE_PIN){
		_sigPin = pin_one;
		pinMode(_sigPin, INPUT);
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
		
	} else {
		digitalWrite(_trigPin, LOW);
		delayMicroseconds(2);
	
		digitalWrite(_trigPin, HIGH);
		delayMicroseconds(10);
		digitalWrite(_trigPin, LOW);
	
		duration = pulseIn(_echoPin, HIGH);
		
		distance= duration*0.034/2;
		
		if(legthType == INCH)
			distance *= 2.54;
		if(legthType == FEET)
			distance = (distance / 10) * 3.28;
	}
	

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
	else
		Serial.println(" cm");
		
	delay(ms);
}
