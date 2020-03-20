# UltraSonic_Lib
![](../header.png)
> 초음파센서의 사용을 도와주는 라이브러리입니다.

<br>

<!-- NPM Version -->
<!-- Build Status -->
[![arduino-library-badge](https://www.ardu-badge.com/badge/UltraSonic_Lib.svg?)](https://www.ardu-badge.com/UltraSonic_Lib)<br>
[![NPM Version][npm-image]][npm-url]    [![Build Status][travis-image]][travis-url]

MIT 라이센스를 준수하며 ``LICENSE``에서 자세한 정보를 확인할 수 있습니다.

<br>

## 기능 및 사용 방법

### 코드
#### 라이브러리 선언
- 아두이노의 라이브러리 폴더에 설치시
```Arduino
    #include <UltraSonic.h>
```
- 소스코드와 동일한 폴더에 설치시
```Arduino
    #include <"UltraSonic_Lib/UltraSonic.h">
```
#### 객체 생성
- FOUR PIN TYPE (4핀 센서 사용)
```C
    UltraSonic us_sensor(FOUR_PIN, (int)TRIG, (int)ECHO);
    // us_sensor 는 객체 이름입니다.
    // pinType = FOUR_PIN (TRIG pin, ECHO pin)
```
- THREE PIN TYPE (3핀 센서 사용)
```Arduino
    UltraSonic us_sensor(THREE_PIN, (int)SIG);
    // us_sensor 는 객체 이름입니다.
    // pinType = THREE_PIN (only SIG pin)
```

#### 기능
- mesureDist (int ms = 0, int legthType = 1)
```Arduino
    float distance = 0;
    distance = us_sensor.mesureDist();
    //거리를 측정하여 내부 변수에 저장해 float 타입으로 반환합니다.

    distance = us_sensor.mesureDist(1000);
    //첫번째 인자는 대기 함수(delay)의 ms를 뜻합니다.
    //위와 같이 작성 시, 반환 후 1000ms를 대기합니다.

    distance = us_sensor.mesureDist(0 , CM);
    //두번째 인자는 길이 단위를 뜻합니다.
    //위와 같이 작성 시, CM 타입으로 변환하여 반환합니다.
    //legthType { CM = 0, FEET, INCH, MM, METER }
```

- distPrint (int ms = 0, int legthType = 1)
```Arduino
    Serial.begin(baud_rate);
    us_sensor.distPrint();
    //거리를 측정하여 내부 변수에 저장해 거리 값을 출력합니다.
    //"distance : (distance value) (legth type)"

    us_sensor.distPrint(1000);
    //위와 같이 작성 시, 출력 후 1000ms를 대기합니다.

    us_sensor.distPrint(0, CM);
    //위와 같이 작성 시, CM 타입으로 변환하여 출력합니다.
    //"distance : (distance value) CM"
```

- sensing (int legthType)
```Arduino
    sensing(legthType);
    //거리를 재측정하여 내부 변수의 거리 변수에 다시 대입합니다.
```

<br>

### 하드웨어
- 아래의 센서를 지원합니다.
    - `HC-SR04` (데이터시트 파일은 /doc/HCSR04.pdf 입니다)
    - TRIG와 ECHO를 사용하는 모든 초음파 센서.

### Wiring
- 아래의 보드를 지원합니다.
    - 실사용 테스트 완료.
        - `Arduino UNO`
        - `Arduino MEGA`
        - `Arduino NANO`
    - 사용 가능 예상.
        - `Arduino IDE`를 사용하는(가능한) 모든 보드

<br>

## 사용 예제

코드 예제를 통해 사용 방법을 자세히 설명합니다.

_더 많은 예제와 사용법은  ``Exemples`` 폴더를 참고하세요._

<br>

## 업데이트 내역

* 1.0.0
    * 첫 정식 버전.
    * 수정: 반환 타입이 다른 함수 통합. (distByFloat + distByInt -> mesureDist).
    * 추가: 센서의 핀 타입과 거리 단위를 설정하는 기능 추가.
* 0.0.2 (데모)
    * 수정: 불필요하게 분리되어 있는 함수 통합.
* 0.0.1 (데모)
    * 개발 시작.
    * 아두이노 라이브러리 매니저 등록
    * 함수 추가: distByFloat(),(int ms) / distByInt(),(int ms) / distPrint(),(int ms).

<br>

## 정보
### 제작
- Jihoon Kim ([jihoonkimtech](https://jihoonkimtech.github.io/), [jihoonkimtech@naver.com](mailto:jihoonkimtech@naver.com))



<!-- Markdown link & img dfn's -->
[npm-image]: https://img.shields.io/npm/v/datadog-metrics.svg?style=flat-square
[npm-url]: https://npmjs.org/package/datadog-metrics
[npm-downloads]: https://img.shields.io/npm/dm/datadog-metrics.svg?style=flat-square
[travis-image]: https://img.shields.io/travis/dbader/node-datadog-metrics/master.svg?style=flat-square
[travis-url]: https://travis-ci.org/dbader/node-datadog-metrics
[wiki]: https://github.com/yourname/yourproject/wiki