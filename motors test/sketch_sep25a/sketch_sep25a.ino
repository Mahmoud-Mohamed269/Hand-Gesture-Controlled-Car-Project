#define in1 2
#define in2 4
#define in3 7
#define in4 8
#define ena 5
#define enb 6
int i =1;
void setup() {
  // put your setup code here, to run once:
pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);
pinMode(ena,OUTPUT);
pinMode(enb,OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
speed1();
forward();
delay(3000);
reverse();
delay(3000);
Tright();
delay(2000);
Tleft();
delay(2000);
OFF();
delay(3000);
}
void forward(){
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
  
  }
  void reverse(){
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
  }
  void Tright(){
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
  }
  void Tleft(){
   digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
    }
    void OFF(){
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
      }
   void speed1(){
    if(i==5) i=1;
    analogWrite(ena , 255/i);
    analogWrite(enb , 255/i);
    i++;
   }
   
