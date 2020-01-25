### UltraSonic Library
- **Library for UltraSonic Distance Sensor**
- **Based on HC-SR04**(datasheet in /doc/HCSR04.pdf)


### Versions History
- **Demo (V0.0.1)
  - add Keyword : distByFloat(),(int ms) / distByInt(),(int ms) / distPrint(),(int ms).
  
  
### Source
- **UltraSonic.h**
  - header file.
  
- **UltraSonic.cpp**
  - function source file.


### how to include
- case library file in Arduino libraries Folder
  - #include <UltraSonic.h>
  
- case library file in Source Folder
  - #include "UltraSonic.h"


### Keyword/Function
- **distByFloat(),(int ms)**
  - Sensing distance then return value(float type)
  - (int ms) means delay time(micro seconds)
  
- **distByInt(),(int ms)**
  - Sensing distance then return value(int type)
  - (int ms) means delay time(micro seconds)
  
- **distPrint(),(int ms)**
  - Sensing distance then serial print value(float type)
  - "distance : " + distance value + " cm" + "\n".
  - (int ms) means delay time(micro seconds)
