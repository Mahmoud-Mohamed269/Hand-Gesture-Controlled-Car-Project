
/*int trigPin = 10;    
int echoPin = 12;    
int buzzerpin = 9;
long duration, cm;*/

#define in1 2
#define in2 4
#define in3 7
#define in4 8
#define ena 5
#define enb 6
char x;

void setup()
{ 
Serial.begin(9600);
pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);
pinMode(ena,OUTPUT);
pinMode(enb,OUTPUT);
/*pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(buzzerpin, OUTPUT);*/}

void loop()
{if (Serial.available()>0){
    x=Serial.read();}
if(x=='f'){
digitalWrite(in1,HIGH);
digitalWrite(in2,LOW);
digitalWrite(in3,HIGH);
digitalWrite(in4,LOW);
analogWrite(ena , 255);
analogWrite(enb , 255);}

else if(x=='b'){
digitalWrite(in1,LOW);
digitalWrite(in2,HIGH);
digitalWrite(in3,LOW);
digitalWrite(in4,HIGH);
analogWrite(ena , 255);
analogWrite(enb , 255);}

else if(x=='r'){
digitalWrite(in1,LOW);
digitalWrite(in2,LOW);
digitalWrite(in3,HIGH);
digitalWrite(in4,LOW);
analogWrite(ena , 255);
analogWrite(enb , 255);}

else if(x=='l'){
  digitalWrite(in1,HIGH);
digitalWrite(in2,LOW);
digitalWrite(in3,LOW);
digitalWrite(in4,LOW);
analogWrite(ena , 255);
analogWrite(enb , 255);}

 else if (x=='s'){
digitalWrite(in1,LOW);
digitalWrite(in2,LOW);
digitalWrite(in3,LOW);
digitalWrite(in4,LOW);
analogWrite(ena , 0);
analogWrite(enb , 0);}

/*digitalWrite(trigPin, LOW);
delayMicroseconds(5);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
pinMode(echoPin, INPUT);
duration = pulseIn(echoPin, HIGH);
cm = (duration/2) / 29.1;
  if(cm==11)
  {digitalWrite(buzzerpin , HIGH);
  delay(200);
  digitalWrite(buzzerpin ,LOW);
  delay(200);}
  else if(cm==7)
  {digitalWrite(buzzerpin , HIGH);
  digitalWrite(in1,LOW);
digitalWrite(in2,LOW);
digitalWrite(in3,LOW);
digitalWrite(in4,LOW);
analogWrite(ena , 0);
analogWrite(enb , 0);
  delay(50);
  digitalWrite(buzzerpin ,LOW);
  delay(50);}
  delay(300);*/
}
