#include <Servo.h>

Servo myservo;
const int servo_pin = 2;
const int trig_pin = 3;
const int echo_pin = 4;
const int trig_pi = 5;
const int echo_pi = 6;
const int ledred=7;
const int ledgreen=8;
const int inter_time = 200;
int time = 0;

void setup() 
{
  Serial.begin(9600);
  myservo.attach(servo_pin, 500, 2400);
  myservo.write(90);
  pinMode (trig_pin, OUTPUT);
  pinMode (echo_pin, INPUT);
  pinMode (trig_pi, OUTPUT);
  pinMode (echo_pi, INPUT);
  pinMode (ledred, OUTPUT);
  pinMode (ledgreen, OUTPUT);
  delay(3000);
} 

void loop() 
{
  float duration, distance,duration_us,distance_cm;
  digitalWrite(trig_pin, HIGH);
  delayMicroseconds(1000);
  digitalWrite(trig_pin, LOW);
  duration = pulseIn (echo_pin, HIGH);
  digitalWrite(trig_pi, HIGH);

  duration_us = pulseIn(echo_pi, HIGH);
  distance_cm = (duration_us/2)/29;
  distance = (duration/2)/29;
  Serial.print(distance);
  Serial.println(" cm");
  time = time + inter_time;
  delay(inter_time);
  if(distance_cm < 4){
    digitalWrite(ledred, HIGH);
    digitalWrite(ledgreen, LOW);// turn on LED
    }
  else{
    digitalWrite(ledred, LOW);
    digitalWrite(ledgreen, HIGH);
    
  if (distance < 10)
  {
    for(int i = 1800; i >= 1100; i-=25){
      myservo.writeMicroseconds(i);
      Serial.println("2");
      delay(100);
    }
    delay(1000);
    for(int i = 1100; i <= 1800; i+=25){
      myservo.writeMicroseconds(i);
      Serial.println("1");
      delay(100);
    }
  }
}
}
