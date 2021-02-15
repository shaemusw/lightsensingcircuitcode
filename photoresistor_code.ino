#include <stdio.h>

int greenLedPin = 2;
int yellowLedPin = 3;
int redLedPin = 4;
const int lightSensorPin = A0;

void setup() {
  Serial.begin(9600);
  pinMode(greenLedPin, OUTPUT);
  pinMode(yellowLedPin,OUTPUT);
  pinMode(redLedPin,OUTPUT);
  pinMode(lightSensorPin, INPUT);
}

void loop() {
  int analogValue = analogRead(lightSensorPin);
  Serial.println(analogValue); 
  
  if(analogValue < 30){         
    digitalWrite(redLedPin, HIGH);
  }
  
  else if(analogValue >= 30 && analogValue <= 68){
    digitalWrite(yellowLedPin, HIGH);
  }
  
  else{ 
    digitalWrite(greenLedPin, HIGH);
  }
  
  delay(200);
  digitalWrite(greenLedPin, LOW);
  digitalWrite(yellowLedPin, LOW);
  digitalWrite(redLedPin, LOW);
}
