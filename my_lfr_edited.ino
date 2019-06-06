int l=0; //left sensor
int r=0; //right sensor

void setup() {
  pinMode(2,INPUT);  //left sensor
  pinMode(3,INPUT); //right sensor
  pinMode(4,OUTPUT); //left motor1 forward
  pinMode(5,OUTPUT); //left motor1 backward
  pinMode(6,OUTPUT); //right motor1 forward
  pinMode(7,OUTPUT); //right motor1 backward
  pinMode(8,OUTPUT); //left motor2 forward
  pinMode(9,OUTPUT); //left motor2 backward
  pinMode(10,OUTPUT); //right motor2 forward
  pinMode(11,OUTPUT); //right motor2 backward
}

void loop() {
  l=digitalRead(2);
  r=digitalRead(3);
  if((l==LOW)&&(r==LOW)){ //stop
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    delay(10);
  }
  if((l==HIGH)&&(r==LOW)){ //right
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    delay(10);
  }
  if((l==LOW)&&(r==HIGH)){ //left
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    delay(10);
  }
  else if((l==HIGH)&&(r==HIGH)){ //forward
      digitalWrite(4,HIGH);
      digitalWrite(5,LOW);
      digitalWrite(6,HIGH);
      digitalWrite(7,LOW);
      digitalWrite(8,HIGH);
      digitalWrite(9,LOW);
      digitalWrite(10,HIGH);
      digitalWrite(11,LOW);
      delay(10);
  }
}
//void convert(void){
//  if(l==LOW&&r==HIGH){ //to convert, run on white and avoid black line
//    l=HIGH;
//    r=LOW;
//  }
//  if(l==HIGH&&r==LOW){
//    l=LOW;
//    r=HIGH;
//  }
//}
