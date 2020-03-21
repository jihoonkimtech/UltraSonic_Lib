/*
 * -UltraSonic Distance Sensor Library-
 * 			for HC-SR04
 *
 * this header file for UltraSonic Distance Sensor Library
 *
 * author jihoonkimtech (jihoonkimtech@naver.com)
 *			(Republic of Korea)
 * version  V1.0.0
 * date  2020-02-12
*/

#ifndef _UltraSonic_H_
#define _UltraSonic_H_

#include "Arduino.h"

enum {
	FOUR_PIN = 0, THREE_PIN,
	CM = 0, FEET, INCH, MM, METER
};

class UltraSonic{
	public :
		UltraSonic(int pinType, int pin_one, int pin_two = 0);
		
		/* return distance */
		float mesureDist(int ms = 0, int legthType = 0);
		
		void distPrint(int ms = 0, int legthType = 0);
		
		void sensing(int legthType);
		
	private : 
		int _pinType;
		int _sigPin;
		int _echoPin;
		int _trigPin;
		float _distance;
};


#endif
