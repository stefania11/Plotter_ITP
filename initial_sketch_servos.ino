/* 
 - If separate wires:
  - Servo Black or Brown to Gnd.
  - Servo Red or Orange (Center wire) to +5V
  - Servo White or Yellow to Signal (Pin 9 + Pin 6)

/*-----( Import needed libraries )-----*/
#include <Servo.h>  // Comes with Arduino IDE

/*-----( Declare Constants and Pin Numbers )-----*/
#define ServoPIN  9  // Can be changed 3,5,6,9,10,11 (NOW can be any pin including A0..A5)
#define ServoPIN2 6  // Can be changed 3,5,6,9,10,11 (NOW can be any pin including A0..A5)
#define ServoMIN  30 // Don't go to end of servo travel
#define ServoMAX  150 // which may be 0 to 180. 

/*-----( Declare objects )-----*/
Servo servo1;  // create servo object to control a servo 
Servo servo2;  // create servo object to control a servo 

// a maximum of eight servo objects can be created

/*-----( Declare Variables )-----*/
int pos = 0;    // variable to store the servo position 


void setup()   /****** SETUP: RUNS ONCE ******/
{
  servo1.attach(ServoPIN);  // attaches the servo on pin 9 to the servo object 
  servo2.attach(ServoPIN2);  // attaches the servo on pin 9 to the servo object 

}//--(end setup )---


void loop()   /****** LOOP: RUNS CONSTANTLY ******/
{
  for(pos = ServoMIN; pos < ServoMAX; pos += 1)  // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    servo1.write(pos);              // tell servo to go to position in variable 'pos' 
    servo2.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(10);                       // waits 15ms for the servo to reach the position 
  } 
  delay(1000);
  for(pos = ServoMAX; pos>=ServoMIN; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    servo1.write(pos);              // tell servo to go to position in variable 'pos' 
    servo2.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(10);                       // waits 15ms for the servo to reach the position 
  }
  delay(2500);

}//--(end main loop )---

/*-----( Declare User-written Functions )-----*/
//none

//*********( THE END )***********
