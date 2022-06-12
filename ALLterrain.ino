//Rayen Lahmar 
#include <SoftwareSerial.h>
SoftwareSerial MyBlue(10, 11);
int inputByte ;
int en1=2;
int en2=3;
int en3=4;
int en4=5;


void setup() {
  Serial.begin(9600);
  MyBlue.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(en1, OUTPUT);
  pinMode(en2, OUTPUT);
  pinMode(en3, OUTPUT);
  pinMode(en4, OUTPUT);

 
}

void loop() {
  if (MyBlue.available() > 0) {
    inputByte = MyBlue.read();
    stop();
    switch(inputByte){
      case 51:
       avant();
       break;
      case 53 :
       right();
       break;
      case 50:
       left();
       break;
      case 52:
       arriere();
       break;
      case 49:
        stop();
        break;
    }
    
    }
    
    
    }
  void avant()
  {
  digitalWrite(en1,LOW);
  digitalWrite(en2,HIGH);
  digitalWrite(en3,HIGH);
  digitalWrite(en4,LOW);
  
  }
   void arriere()
  {
  digitalWrite(en2,LOW);
  digitalWrite(en1,HIGH);
  digitalWrite(en4,HIGH);
  digitalWrite(en3,LOW);
  delay(100);
  }
  

void right()
  {
  digitalWrite(en1,HIGH);
  digitalWrite(en2,LOW);
  digitalWrite(en3,HIGH);
  digitalWrite(en4,LOW);
  
  }
   void left()
  {
  digitalWrite(en2,HIGH);
  digitalWrite(en1,LOW);
  digitalWrite(en4,HIGH);
  digitalWrite(en3,LOW);
  
  }
     void stop()
  {
   digitalWrite(en1,LOW);
        digitalWrite(en2,LOW);
        digitalWrite(en3,LOW);
        digitalWrite(en4,LOW);
  
  }
