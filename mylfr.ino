int LS;
int RS;
int s1;
int s2;
int R1f;
int R1b;
int R2f;
int R2b;
int L1f;
int L1b;
int L2f;
int L2b;
void setup(){
  int s1=2;
  int s2=3;
  int R1f=4;
  int R1b=5;
  int R2f=6;
  int R2b=7;
  int L1f=8;
  int L1b=9;
  int L2f=10;
  int L2b=11;
  pinMode(s1,INPUT);
  pinMode(s2,INPUT);
  pinMode(R1f,OUTPUT);
  pinMode(R1b,OUTPUT);
  pinMode(R2f,OUTPUT);
  pinMode(R2b,OUTPUT);
  pinMode(L1f,OUTPUT);
  pinMode(L1b,OUTPUT);
  pinMode(L2f,OUTPUT);
  pinMode(L2b,OUTPUT);
}

void loop(){
  digitalWrite(s1,HIGH);
  digitalWrite(s2,HIGH);
  LS=digitalRead(s1);
  RS=digitalRead(s2);
  if((LS=LOW)&&(RS=LOW)){
    digitalWrite(R1f,LOW);
    digitalWrite(R1b,LOW);
    digitalWrite(R2f,LOW);
    digitalWrite(R2b,LOW);
    digitalWrite(L1f,LOW);
    digitalWrite(L1b,LOW);
    digitalWrite(L2f,LOW);
    digitalWrite(L2b,LOW);
  }
  else if((LS=HIGH)&&(RS=LOW)){
    digitalWrite(R1f,HIGH);
    digitalWrite(R1b,LOW);
    digitalWrite(R2f,HIGH);
    digitalWrite(R2b,LOW);
    digitalWrite(L1f,LOW);
    digitalWrite(L1b,HIGH);
    digitalWrite(L2f,LOW);
    digitalWrite(L2b,HIGH);
  }
  else if((LS=LOW)&&(RS=HIGH)){
    digitalWrite(R1f,LOW);
    digitalWrite(R1b,HIGH);
    digitalWrite(R2f,LOW);
    digitalWrite(R2b,HIGH);
    digitalWrite(L1f,HIGH);
    digitalWrite(L1b,LOW);
    digitalWrite(L2f,HIGH);
    digitalWrite(L2b,LOW);
  }
  else if((LS=HIGH)&&(RS=HIGH)){
      digitalWrite(R1f,HIGH);
      digitalWrite(R1b,LOW);
      digitalWrite(R2f,HIGH);
      digitalWrite(R2b,LOW);
      digitalWrite(L1f,HIGH);
      digitalWrite(L1b,LOW);
      digitalWrite(L2f,HIGH);
      digitalWrite(L2b,LOW);
  }
}
