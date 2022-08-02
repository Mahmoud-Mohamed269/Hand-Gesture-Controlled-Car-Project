//for glove

#include <MPU6050.h>
#include <Wire.h>   
MPU6050 sensor ;

int16_t ax, ay, az ;
int16_t gx, gy, gz ;

void setup() {
  Serial.begin(9600);
 Wire.begin();
   sensor.initialize();   
 
delay (800);}

void loop() {
  sensor.getMotion6 (&ax, &ay, &az, &gx, &gy, &gz);
ax=map(ax,-17000,17000,0,180) ;
ay=map(ay,-17000,17000,0,180) ;

if(ax<=105 && ax>=99 && ay<=70 && ay>=61)
{ Serial.write('s');}// stop

else if(ax<=138 && ax>=130)
{ Serial.write('f');}//forward

else if(ax<=55 && ax>=45)
{Serial.write('b');}//backward

else  if(ay<=140 && ay>=130)
{ Serial.write('r');}//right

else if(ay<=7 && ay>=1)
{Serial.write('l');}//left
}
 
