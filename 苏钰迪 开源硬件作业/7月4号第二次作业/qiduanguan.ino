void setup()
{
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  Serial.begin(9600);
}
int income=0;
void loop()
{
  if(Serial.available()>0)
  {
  income=Serial.read();
    switch(income)
    {
     case'0':
     show0();
     break;
     case'1':
     show1();
     break;
     case'2':
     show2();
     break;
     case'3':
     show3();
     break;
     case'4':
     show4();
     break;
     case'5':
     show5();
     break;
     case'6':
     show6();
     break;
     case'7':
     show7();
     break;
     case'8':
     show8();
     break;
     case'9':
     show9();
     break;
    }
  }
 }
  
void show0()
{
  digitalWrite(1,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  delay(10);
}

void show1()
{
  digitalWrite(1,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  delay(10);
}

void show2()
{
  digitalWrite(1,LOW);
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  delay(10);
}

void show3()
{
  digitalWrite(1,HIGH);
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  delay(10);
}

void show4()
{
  digitalWrite(1,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  delay(10);
}

void show5()
{
  digitalWrite(1,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  delay(10);
}

void show6()
{
  digitalWrite(1,LOW);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  delay(10);
}

void show7()
{
  digitalWrite(1,HIGH);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  delay(10);
}

void show8()
{
  digitalWrite(1,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  delay(10);
}

void show9()
{
  digitalWrite(1,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  delay(10);
}