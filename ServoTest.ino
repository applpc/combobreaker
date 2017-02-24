// defines pins numbers
const int stepPin = 6; 
const int dirPin = 5; 
//defines pause in between movements
const int delBetweenSteps = 500;
const int delBetweenSets =1000;
 
void setup() {
  // Sets the two pins as Outputs
  pinMode(stepPin,OUTPUT); 
  pinMode(dirPin,OUTPUT);
}
void loop() {
  digitalWrite(dirPin,HIGH); // Enables the motor to move in dir 1.
  // Makes 200 pulses for making one full cycle rotation
  for(int x = 0; x < 200; x++) {
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(delBetweenSteps); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(delBetweenSteps); 
  }
  delay(delBetweenSets); // One second delay
 
  digitalWrite(dirPin,LOW); // Enables the motor to move in dir 2.
  // Makes 200 pulses for making one full cycle rotation
  for(int x = 0; x < 200; x++) {
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(delBetweenSteps); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(delBetweenSteps); 
  }
  delay(delBetweenSets); // One second delay
}
