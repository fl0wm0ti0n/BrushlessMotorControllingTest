/*
 Name:		BrushlessMotorControllingTest.ino
 Created:	27.11.2020 18:40:25
 Author:	flow
*/

#include <Servo.h>

Servo ESC;

int potValue;

// the setup function runs once when you press reset or power the board
void setup() {
    // ESC = Pin 5
    ESC.attach(5, 1000, 2000);
}

// the loop function runs over and over again until power down or reset
void loop() {
    potValue = analogRead(19);
    potValue = map(potValue, 0, 1023, 0, 180);
    ESC.write(potValue);
}
