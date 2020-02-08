### UltraSonic_Lib
- **Library for UltraSonic Distance Sensor**
- **Based on HC-SR04**(datasheet in /doc/HCSR04.pdf)


### Versions History
- **Demo (V0.0.1)**
  - add Keyword : distByFloat(),(int ms) / distByInt(),(int ms) / distPrint(),(int ms).
  
- **Demo (V0.0.2)**
  - combine Keyword : distByFloat(int ms=0) / distByInt(int ms=0) / distPrint(int ms=0).
  
- **Demo (V0.0.4)**
  - combine Keyword : distByFloat + distByInt -> ensureDist(int ms=0).
  - function test : length_type{MM, CM, M, FEET, INCH), pin_type{THREE_PIN, FOUR_PIN)
  - Registration on Arudino Library Manager!
  
  
### Source
- **UltraSonic.h**
  - header file.
  
- **UltraSonic.cpp**
  - function source file.
  
- **exemples/basics/basics.ino**
  - Default example with all basic functions.
  

### how to include
- case library file in Arduino libraries Folder
  - #include <UltraSonic.h>
  
- case library file in Source Folder
  - #include "UltraSonic.h"


### Keyword/Function
- **ensureDist(int ms)**
  - Sensing distance then return value(default float type)
  - (int ms) means delay time(micro seconds) (0 is the initial value)
  
- **distPrint(int ms)**
  - Sensing distance then serial print value(float type)
  - "distance : " + distance value + " cm" + "\n".
  - (int ms) means delay time(micro seconds) (0 is the initial value)
