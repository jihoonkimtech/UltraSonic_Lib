/*
 * -UltraSonic Distance Sensor Library-
 * 			for HC-SR04
 *
 * this cpp file for UltraSonic Distance Sensor Library
 *
 * author jihoonkimtech (jihoonkimtech@naver.com)
 *			(Republic of Korea)
 * version  V0.0.2
 * date  2020-01-27
*/

#include "UltraSonic.h"

UltraSonic::UltraSonic(int trigPin, int echoPin){
	_trigPin = trigPin;
	_echoPin = echoPin;
	
	pinMode(_trigPin, OUTPUT);
	pinMode(_echoPin, INPUT);
}

void UltraSonic::sensing(){
	
	long duration;
	float distance;
	
	digitalWrite(_trigPin, LOW);
	delayMicroseconds(2);

	digitalWrite(_trigPin, HIGH);
	delayMicroseconds(10);
	digitalWrite(_trigPin, LOW);

	duration = pulseIn(_echoPin, HIGH);

	distance= duration*0.034/2;

	_distance = distance;
	
}


int UltraSonic::distByInt(int ms = 0){
	sensing();
	delay(ms);
	return (int)_distance;
}


float UltraSonic::distByFloat(int ms = 0){
	sensing();
	delay(ms);
	return _distance;
}


void UltraSonic::distPrint(int ms = 0){
	sensing();
	Serial.print("distance : ");
	Serial.print(_distance);
	Serial.println(" cm");
	delay(ms);
}
