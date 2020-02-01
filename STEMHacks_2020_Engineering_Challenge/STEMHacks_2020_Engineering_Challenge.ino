#include <mathstronauts_arduino_library.h>
int fire = 2;
int green = 3;
int yellow = 4;
int red = 5;
int water = 10;
int laser = 11;
int button = 12;
int buzzer = 13;
void setup() {
  // put your setup code here, to run once:
  pinMode(fire, INPUT);
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(water, INPUT);
  pinMode(laser, INPUT);
  pinMode(button, INPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly: 

}
