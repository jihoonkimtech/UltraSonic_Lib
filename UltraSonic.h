/*
 * -UltraSonic Distance Sensor Library-
 * 			for HC-SR04
 *
 * this header file for UltraSonic Distance Sensor Library
 *
 * author jihoonkimtech (jihoonkimtech@naver.com)
 *			(Republic of Korea)
 * version  V0.0.2
 * date  2020-01-27
*/

#ifndef _UltraSonic_H_
#define _UltraSonic_H_

#include "Arduino.h"

class UltraSonic{
	public :
		UltraSonic(int trigPin, int echoPin);
		
		/* return distance */
		float distByFloat(int ms = 0);
		
		/* return (int)distance */
		int distByInt(int ms = 0);
		
		void distPrint(int ms = 0);
		
		void sensing();
		
	private : 
		int _echoPin;
		int _trigPin;
		float _distance;
};


#endif
