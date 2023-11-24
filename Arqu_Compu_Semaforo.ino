// Integrantes del grupo
//Flores Soria Bryan Javier
//Salinas Andrés 

const int rojoPin = 11;
const int amarilloPin = 10;
const int verdePin = 9;

void setup() {

  pinMode(rojoPin, OUTPUT);
  pinMode(amarilloPin, OUTPUT);
  pinMode(verdePin, OUTPUT);
}

void loop() {
 
  digitalWrite(rojoPin, HIGH);
  delay(3000);  
  
  digitalWrite(rojoPin, LOW);
  digitalWrite(amarilloPin, HIGH);
  delay(3000);  

  digitalWrite(amarilloPin, LOW);
  digitalWrite(verdePin, HIGH);
  delay(3000);  

  digitalWrite(verdePin, LOW);
}
