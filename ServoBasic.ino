/*
 * An illustrative program to rotate servo motor to the angle specified.
 */

// Library available with Arduino IDE
#include<Servo.h>

// Servo type instance
Servo myservo;

int angle = 0;

void setup()
{
  // Internal PWM pin
  myservo.attach( 9 );
}

void loop()
{
  for( angle = 0; angle < 180; angle += 1 )
  {
    myservo.write( angle );
    delay( 20 );
  }
  for( angle = 180; angle > 0; angle -= 1 )
  {
    myservo.write( angle );
    delay( 20 );
  }
}
