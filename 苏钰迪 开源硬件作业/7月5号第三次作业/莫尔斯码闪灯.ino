void setup()
{
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
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
       case'a':morsea();break;
       case'b':morseb();break;
       case'c':morsec();break;
       case'd':morsed();break;
       case'e':morsee();break;
       case'f':morsef();break;
       case'g':morseg();break;
       case'h':morseh();break;
       case'i':morsei();break;
       case'j':morsej();break;
       case'k':morsek();break;
       case'l':morsel();break;
       case'm':morsem();break;
       case'n':morsen();break;
       case'o':morseo();break;
       case'p':morsep();break;
       case'q':morseq();break;
       case'r':morser();break;
       case's':morses();break;
       case't':morset();break;
       case'u':morseu();break;
       case'v':morsev();break;
       case'w':morsew();break;
       case'x':morsex();break;
       case'y':morsey();break;
       case'z':morsez();break;
       case' ':morseno();break;

       }
  }
}
   

void morsea(){
digitalWrite(6,HIGH);digitalWrite(8,LOW);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,HIGH);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(800);
}

void morseb(){
digitalWrite(6,HIGH);digitalWrite(8,HIGH);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400); 
digitalWrite(6,HIGH);digitalWrite(8,LOW);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,LOW);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,LOW);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(800);

}

void morsec(){
digitalWrite(6,HIGH);digitalWrite(8,HIGH);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,LOW);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,HIGH);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,LOW);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(800);

}

void morsed(){
digitalWrite(6,HIGH);digitalWrite(8,HIGH);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,LOW);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,LOW);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(800);

}

void morsee(){
digitalWrite(6,HIGH);digitalWrite(8,LOW);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(800);

}

void morsef(){
digitalWrite(6,HIGH);digitalWrite(8,LOW);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,LOW);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,HIGH);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,LOW);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(800);

}

void morseg(){
digitalWrite(6,HIGH);digitalWrite(8,HIGH);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,HIGH);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,LOW);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(800);

}

void morseh(){
digitalWrite(6,HIGH);digitalWrite(8,LOW);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,LOW);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,LOW);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,LOW);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(800);

}
void morsei(){
digitalWrite(6,HIGH);digitalWrite(8,LOW);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,LOW);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(800);

}

void morsej(){
digitalWrite(6,HIGH);digitalWrite(8,LOW);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,HIGH);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,HIGH);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,HIGH);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(800);

}

void morsek(){
digitalWrite(6,HIGH);digitalWrite(8,HIGH);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,LOW);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,HIGH);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(800);

}

void morsel(){
digitalWrite(6,HIGH);digitalWrite(8,LOW);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,HIGH);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,LOW);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,LOW);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(800);

}

void morsem(){
digitalWrite(6,HIGH);digitalWrite(8,HIGH);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,HIGH);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(800);

}

void morsen(){
digitalWrite(6,HIGH);digitalWrite(8,HIGH);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,LOW);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(800);

}

void morseo(){
digitalWrite(6,HIGH);digitalWrite(8,HIGH);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,HIGH);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,HIGH);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(800);

}

void morsep(){
digitalWrite(6,HIGH);digitalWrite(8,LOW);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,HIGH);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,HIGH);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,LOW);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(800);

}

void morseq(){
digitalWrite(6,HIGH);digitalWrite(8,HIGH);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,HIGH);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,LOW);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,HIGH);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(800);

}

void morser(){
digitalWrite(6,HIGH);digitalWrite(8,LOW);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,HIGH);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,LOW);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(800);

}

void morses(){
digitalWrite(6,HIGH);digitalWrite(8,LOW);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,LOW);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,LOW);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(800);

}

void morset(){
digitalWrite(6,HIGH);digitalWrite(8,HIGH);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(800);

}

void morseu(){
digitalWrite(6,HIGH);digitalWrite(8,LOW);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,LOW);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,HIGH);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(800);

}

void morsev(){
digitalWrite(6,HIGH);digitalWrite(8,LOW);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,LOW);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,LOW);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,HIGH);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(800);

}

void morsew(){
digitalWrite(6,HIGH);digitalWrite(8,LOW);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,HIGH);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,HIGH);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(800);

}

void morsex(){
digitalWrite(6,HIGH);digitalWrite(8,HIGH);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,LOW);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,LOW);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,HIGH);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(800);

}

void morsey(){
digitalWrite(6,HIGH);digitalWrite(8,HIGH);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,LOW);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,HIGH);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,HIGH);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(800);

}

void morsez(){
digitalWrite(6,HIGH);digitalWrite(8,HIGH);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,HIGH);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,LOW);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(400);
digitalWrite(6,HIGH);digitalWrite(8,LOW);delay(400);
digitalWrite(6,LOW);digitalWrite(8,LOW);delay(800);

}

void morseno(){
  delay(800);
}