// C++ code
//
const int switchPin1 = 2; 
const int switchPin2 = 1; 

const int leftSwitchPin = 3;
const int rightSwitchPin = 4;

const int leftVoltagePin = A0; 
const int rightVoltagePin = A1; 


const int leftMotorPin = 6; 
const int rightMotorPin = 5; 

void setup() {
  pinMode(switchPin1, INPUT);
  pinMode(switchPin2, INPUT);
  
  
  pinMode(leftMotorPin, OUTPUT);
  pinMode(rightMotorPin, OUTPUT);
  
 
  pinMode(leftSwitchPin, INPUT);
  pinMode(rightSwitchPin, INPUT);

  Serial.begin(9600);
}

void loop() {
  
 int switchState1 = digitalRead(switchPin1);
 int switchState2 = digitalRead(switchPin2);
 
  int leftSwitchState1 = digitalRead(leftSwitchPin);
  int rightSwitchState2 = digitalRead(rightSwitchPin);

int leftVoltage = map(analogRead(leftVoltagePin), 0, 1023, 0, 255);
  
int rightVoltage = map(analogRead(rightVoltagePin), 0, 1023, 0, 255);
  
  if(switchState1 == HIGH){
    (leftSwitchState1 == HIGH);
     digitalWrite(leftMotorPin, HIGH);
    analogWrite(leftMotorPin, leftVoltage);
    } else {
    digitalWrite(leftMotorPin, LOW);
  }

  if(switchState2 == HIGH){ 
    (rightSwitchState2 == HIGH);
    digitalWrite(rightMotorPin, HIGH); 
    analogWrite(rightMotorPin, rightVoltage);
  } else {
    digitalWrite(rightMotorPin, LOW);
  }
  
  if (Serial.available() > 0) {
    char reading = Serial.read();
    if (reading == 'L') {
      digitalWrite(leftMotorPin, HIGH);
    } else if (reading == 'R') {
      digitalWrite(rightMotorPin, HIGH); 
    } else if (reading == 'S') {
      digitalWrite(leftMotorPin, LOW); 
      digitalWrite(rightMotorPin, LOW); 
    }
  }
}