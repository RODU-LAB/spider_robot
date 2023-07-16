#include <Servo.h>                                  // Servo 라이브러리 헥사 선언
Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;
Servo myservo5;
Servo myservo6;
Servo myservo7;
Servo myservo8;


// 서보모터 선언
int pos = 0;                                               // 모터 위치를 확인하기 위해 변수를 선언
int servoPin1 = 4;
int servoPin2 = 5;
int servoPin3 = 6;
int servoPin4 = 7;
int servoPin5 = 8;
int servoPin6 = 9;
int servoPin7 = 10;
int servoPin8 = 11;

void setup() {
     pinMode (4, OUTPUT);
     pinMode (5, OUTPUT);
     pinMode (6, OUTPUT);
     pinMode (7, OUTPUT);
     pinMode (8, OUTPUT);
     pinMode (9, OUTPUT);
     pinMode (10, OUTPUT);
     pinMode (11, OUTPUT);// 모터 제어핀을 출력으로 설정
     myservo1.attach(4);
     myservo2.attach(5);
     myservo3.attach(6);
     myservo4.attach(7);
     myservo5.attach(8);
     myservo6.attach(9);
     myservo7.attach(10);
     myservo8.attach(11);// 모터의 신호선을 6번핀에 연결
}

void set_position(){
    myservo1.write(45); // 전진방향 0~180
    myservo2.write(135); // 전진방향 0~180
    myservo3.write(90); // 위방향 0~180
    myservo4.write(90); // 아래방향 0~180
    myservo5.write(135);
    myservo6.write(45);
    myservo7.write(90);
    myservo8.write(90);
   }

void lay_position(){
    myservo1.write(45); // 전진방향 0~180
    myservo2.write(135); // 전진방향 0~180
    myservo3.write(135); // 위방향 0~180
    myservo4.write(45); // 아래방향 0~180
    myservo5.write(135);
    myservo6.write(45);
    myservo7.write(45);
    myservo8.write(135);
   }
  
void loop(){
  set_position();
  delay(3000);
  lay_position();
  delay(3000);
    
}
