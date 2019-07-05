void setup() {

  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {

/*while (Serial.available() > 0)  
    {
      comdata += char(Serial.read());
        delay(2);
    }
    if (comdata.length() > 0)
    {
        Serial.println(comdata);
        comdata = "";
    }*/
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(1000);                      
  digitalWrite(LED_BUILTIN, LOW);  
  delay(1000);  
  }

#include<stdio.h>
int main()
{ 
  char in;
  printf("begin\n");
  while(1)
  {
    scanf("%c",&in);
    switch(in)
    {
      case'a':printf("*-" );break;
      case'b':printf("-***");break;
      case'c':printf("-*-*");break;
      case'd':printf("-**");break;
      case'e':printf("*");break;
      case'f':printf("**-*");break;
      case'g':printf("--*");break;
      case'h':printf("****");break;
      case'i':printf("**");break;
      case'j':printf("*---");break;
      case'k':printf("-*-");break;
      case'l':printf("*-**");break;
      case'm':printf("--");break;
      case'n':printf("-*");break;
      case'o':printf("---");break;
      case'p':printf("*--*");break;
      case'q':printf("--*-");break;
      case'r':printf("*-*");break;
      case's':printf("***");break;
      case't':printf("-");break;
      case'u':printf("**-");break;
      case'v':printf("***-");break;
      case'w':printf("*--");break;
      case'x':printf("-**-");break;
      case'y':printf("-*--");break;
      case'z':printf("--**");break;
    

    }
    loop();
    if(in=='\n')break;
  }  
}
