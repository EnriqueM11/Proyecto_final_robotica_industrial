#include <Servo.h>

// === Servos ===
Servo servo1;
Servo servo2;

// === Pines sensores ===
const int sensorPNP = 2; 
const int sensorNPN = 3; 

// === Pines servos ===
const int pinServo1 = 9;  
const int pinServo2 = 10; 

void setup() {
  Serial.begin(9600);

  pinMode(sensorPNP, INPUT);
  pinMode(sensorNPN, INPUT);

  servo1.attach(pinServo1);
  servo2.attach(pinServo2);
  servo1.write(0);
  servo2.write(0);

  Serial.println("Sistema listo");
  delay(1000);
}

void loop() {
  bool pnpDetecta = digitalRead(sensorPNP) == LOW; 
  bool npnDetecta = digitalRead(sensorNPN) == LOW;

  if (pnpDetecta && !npnDetecta) {
    
    Serial.println("Solo PNP detecta - Servo 2");

    delay(7000);

    for (int pos = 0; pos <= 90; pos++) {
      servo2.write(pos);
      delay(5);
    }

    delay(100);

    for (int pos = 90; pos >= 0; pos--) {
      servo2.write(pos);
      delay(5);
    }

  } 
  else if (pnpDetecta && npnDetecta) {
    
    Serial.println("Ambos sensores - Servos 1 y 2");

    delay(50);

   
    for (int pos = 0; pos <= 90; pos++) {
      servo2.write(pos);
      delay(4);
    }

    delay(8000);

   
    for (int pos = 0; pos <= 90; pos++) {
      servo1.write(pos);
      delay(5);
    }

    delay(8000);

    
    for (int pos = 90; pos >= 0; pos--) {
      servo1.write(pos);
      servo2.write(pos);
      delay(5);
    }
  } 
  else {
    Serial.println("Esperando...");
  }

  delay(200);
}
