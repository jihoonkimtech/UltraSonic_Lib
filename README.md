# UltraSonic_Lib
![](../header.png)
> Library for UltraSonic Distance Sensor.

<br>

<!-- NPM Version -->
<!-- Build Status -->
[![arduino-library-badge](https://www.ardu-badge.com/badge/UltraSonic_Lib.svg?)](https://www.ardu-badge.com/UltraSonic_Lib)<br>
[![NPM Version][npm-image]][npm-url]    [![Build Status][travis-image]][travis-url]

Follows the MIT license ( Please check ``LICENSE`` file for more information. ) 

<br>

## Function and How to Use

### Code
#### Library Import
- in case of Library file in Arduino/Library folder
```Arduino
    #include <UltraSonic.h>
```
- In case of Library file in Source code file
```Arduino
    #include <"UltraSonic_Lib/UltraSonic.h">
```
#### Create Object
- FOUR PIN TYPE
```Arduino
    UltraSonic us_sensor(FOUR_PIN, (int)TRIG, (int)ECHO);
    // us_sensor is object name
    // pinType = FOUR_PIN (TRIG pin, ECHO pin)
```
- THREE PIN TYPE
```Arduino
    UltraSonic us_sensor(THREE_PIN, (int)SIG);
    // us_sensor is object name
    // pinType = THREE_PIN (only SIG pin)
```

#### Function
- mesureDist (int ms = 0, int legthType = 1)
```Arduino
    float distance = 0;
    distance = us_sensor.mesureDist();
    //return measured distance value(float type)

    distance = us_sensor.mesureDist(1000);
    //return and then delay 1000 ms

    distance = us_sensor.mesureDist(0 , CM);
    //return centimeter type
    //legthType = CM = 0, FEET, INCH, MM, METER
```

- distPrint (int ms = 0, int legthType = 1)
```Arduino
    Serial.begin(baud_rate);
    us_sensor.distPrint();
    //print measured distance value
    //"distance : (distance value) (legth type)"

    us_sensor.distPrint(1000);
    //print and then delay 1000 ms

    us_sensor.distPrint(0, CM);
    //print centimeter type
    //"distance : (distance value) CM"
```

- sensing (int legthType)
```Arduino
    sensing(legthType);
    //Renew distance value inside object
```

<br>

### Hardware
- Supports the sensors below.
    - `HC-SR04` (datasheet in /doc/HCSR04.pdf)
    - all TRIG, ECHO Type UltraSonic Sensor

### Wiring
- The boards below are supported.
    - Test Finished.
        - `Arduino UNO`
        - `Arduino MEGA`
        - `Arduino NANO`
    - Support Forecast
        - `All boards using Arduino IDE`

<br>

## Example



_The contents of the example are see ``Exemples`` folder._

<br>

## Update History

* 1.0.0
    * First official version
    * fix: Combine function (distByFloat + distByInt -> mesureDist).
    * feat: Add length_type, pin_type.
* 0.0.2 (demo)
    * fix: Combine unnecessarily separate function.
* 0.0.1 (demo)
    * Start of Develop.
    * Register with Library Manager.
    * feat: Add distByFloat(),(int ms) / distByInt(),(int ms) / distPrint(),(int ms).

<br>

## Information
### Maker
- Jihoon Kim ([jihoonkimtech](https://jihoonkimtech.github.io/), [jihoonkimtech@naver.com](mailto:jihoonkimtech@naver.com))




<!-- Markdown link & img dfn's -->
[npm-image]: https://img.shields.io/npm/v/datadog-metrics.svg?style=flat-square
[npm-url]: https://npmjs.org/package/datadog-metrics
[npm-downloads]: https://img.shields.io/npm/dm/datadog-metrics.svg?style=flat-square
[travis-image]: https://img.shields.io/travis/dbader/node-datadog-metrics/master.svg?style=flat-square
[travis-url]: https://travis-ci.org/dbader/node-datadog-metrics
[wiki]: https://github.com/yourname/yourproject/wiki