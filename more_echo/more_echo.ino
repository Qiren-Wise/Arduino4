// 包含 HC-SR04 传感器的 NewPing 库
#include <NewPing.h>

// 以 1 针模式连接 4 个 HC-SR04 传感器
// Sensor 0
#define TRIGGER_PIN_0  8
#define ECHO_PIN_0     8

// Sensor 1
#define TRIGGER_PIN_1  9
#define ECHO_PIN_1     9

// Sensor 2
#define TRIGGER_PIN_2  10
#define ECHO_PIN_2     10

// Sensor 3
#define TRIGGER_PIN_3  11
#define ECHO_PIN_3     11

// 最大距离为 400 厘米
#define MAX_DISTANCE 400

// 为超声波传感器创建对象
NewPing sensor0(TRIGGER_PIN_0, ECHO_PIN_0, MAX_DISTANCE);
NewPing sensor1(TRIGGER_PIN_1, ECHO_PIN_1, MAX_DISTANCE);
NewPing sensor2(TRIGGER_PIN_2, ECHO_PIN_2, MAX_DISTANCE);
NewPing sensor3(TRIGGER_PIN_3, ECHO_PIN_3, MAX_DISTANCE);

// 表示距离的变量
float distance0, distance1, distance2, distance3;

void setup() {

   // 用于测试的串行监视器
   Serial.begin (9600);

}

void loop() {

  // 读取 CM 中的传感器
  // Sensor 0
  distance0 = sensor0.ping_cm();
  delay(20);

  // Sensor 1
  distance1 = sensor1.ping_cm();
  delay(20);

  // Sensor 2
  distance2 = sensor2.ping_cm();
  delay(20);

  // Sensor 3
  distance3 = sensor3.ping_cm();
  delay(20);


  //将结果发送到串行监视器
  // 传感器 0
  Serial.print("Distance 0 = ");
  if (distance0 >= 400 || distance0 <= 2) {
    Serial.println("Out of range");
  }
  else {
    Serial.print(distance0);
    Serial.println(" cm");
    delay(500);
  }
  // 传感器 01
  Serial.print("Distance 1 = ");
  if (distance1 >= 400 || distance1 <= 2) {
    Serial.println("Out of range");
  }
  else {
    Serial.print(distance1);
    Serial.println(" cm");
    delay(500);
  }
  // 传感器 02
  Serial.print("Distance 2 = ");
  if (distance2 >= 400 || distance2 <= 2) {
    Serial.println("Out of range");
  }
  else {
    Serial.print(distance2);
    Serial.println(" cm");
    delay(500);
  }
  // 传感器 0 3
  Serial.print("Distance 3 = ");
  if (distance3 >= 400 || distance3 <= 2) {
    Serial.println("Out of range");
  }
  else {
    Serial.print(distance3);
    Serial.println(" cm");
    delay(500);
  }


  delay(500);
} 
