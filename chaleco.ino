//programa del chaleco del ciclista 
//21 de noviembre del 2019
int led1=4;
int led2=5;
int led3=6;
int led4=7;
int led5=8;
int led6=9;
int led7=10;
int led8=11;
int led9=12;
int led10=13;
int tiempo=100;
int izq=1;
void setup() {
 pinMode(izq,INPUT);
 pinMode(led1,OUTPUT);
 pinMode(led2,OUTPUT);
 pinMode(led3,OUTPUT);
 pinMode(led4,OUTPUT);
 pinMode(led5,OUTPUT);
 pinMode(led6,OUTPUT);
 pinMode(led7,OUTPUT);
 pinMode(led8,OUTPUT);
 pinMode(led9,OUTPUT);
 pinMode(led10,OUTPUT);
}

void loop() {
  if(digitalRead(izq)==1){
    izquierda();
  }
}
void izquierda(){
  digitalWrite(led3,1);
  digitalWrite(led10,1);
  digitalWrite(led5,1);
  delay(tiempo);
  digitalWrite(led3,0);
  digitalWrite(led10,0);
  digitalWrite(led5,0);
  digitalWrite(led2,1);
  digitalWrite(led9,1);
  digitalWrite(led6,1);
  delay(tiempo);
  digitalWrite(led2,0);
  digitalWrite(led9,0);
  digitalWrite(led6,0);
  digitalWrite(led1,1);
  digitalWrite(led7,1);
  digitalWrite(led8,1);
  delay(tiempo);
  digitalWrite(led1,0);
  digitalWrite(led7,0);
  digitalWrite(led8,0);

  }
