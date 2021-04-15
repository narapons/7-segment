
int a = 1;
int b = 2;
int c = 3;
int d = 4;
int e = 5;
int f = 6;
int g = 7;
int dp = 8;
int times = 1000;

void setup(){
  int i = 0;
  for(i; i<=8; i++){
    pinMode(i,OUTPUT);
  }
}

void reset(){
  int i = 1;
  for (i; i<=8; i++){
    digitalWrite(i,LOW);
  }
}

void n0(){
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  delay(times);
  reset();
}

void n1(){
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  delay(times);
  reset();
}

void n2(){
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(d,HIGH);
  delay(times);
  reset();
}

void n3(){
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(g,HIGH);
  delay(times);
  reset();
}

void n4(){
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  delay(times);
  reset();
}

void n5(){
  digitalWrite(a,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  delay(times);
  reset();
}

void n6(){
  digitalWrite(a,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  delay(times);
  reset();
}

void n7(){
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  delay(times);
  reset();
}

void n8(){
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  delay(times);
  reset();
}

void n9(){
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  delay(times);
  reset();
}

void dps(){
  digitalWrite(dp,HIGH);
  delay(times);
  reset();
}

void loop(){
  n0();
  n1();
  n2();
  n3();
  n4();
  n5();
  n6();
  n7();
  n8();
  n9();
  dps();
}
