
//for glove
// for any question email at Hammadiqbal12@gmail.com
#include <GY6050.h>
#include <Wire.h>
int X = 0;
int Y=0;
GY6050 gyro(0x68);
void setup() {
  Serial.begin(9600);
 Wire.begin();
    gyro.initialisation();
  delay(1500);  }

void loop() {
  X = gyro.refresh('A', 'X');
   Y= gyro.refresh('A', 'Y');
 if(X<-23 && Y<-20)
  {   //backward
  Serial.println('b');
  }
 else if(X>50 && Y>0)
  {       //forward
  Serial.println('f');
 }
 else if(Y<-88  && X>8 && X<12)
  { //left
 Serial.println('l');
    }
 else if(Y>72 && X>4 )
  { //right
 Serial.println('r');
    }  
     else if(X>2 && Y>-10 && Y<-6 )
  {//stop
 Serial.println('s');
    }delay(50);
  /* Serial.print("x=");
    Serial.print(X);
    Serial.print("\t");
    Serial.print("y=");
    Serial.println(Y);
    delay(600);*/
  }
 
