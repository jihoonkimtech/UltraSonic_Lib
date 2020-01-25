/*
 * -UltraSonic Distance Sensor Library-
 * 			for HC-SR04
 *
 * this header file for UltraSonic Distance Sensor Library
 *
 * author jihoonkimtech (jihoonkimtech@naver.com)
 *			(Republic of Korea)
 * version  V0.0.1
 * date  2020-01-25
*/

#ifndef _UltraSonic_H_
#define _UltraSonic_H_

#include "Arduino.h"

class UltraSonic{
	public :
		UltraSonic(int trigPin, int echoPin);
		
		/* return distance */
		float distByFloat(int ms);
		float distByFloat();
		
		/* return (int)distance */
		int distByInt(int ms);
		int distByInt();
		
		void distPrint();
		void distPrint(int ms);
		
		void sensing();
		
	private : 
		int _echoPin;
		int _trigPin;
		float _distance;
};


#endif
