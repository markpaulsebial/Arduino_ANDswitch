int con=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, INPUT);
  pinMode(12, INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly: //for AND OR logic
  //if(digitalRead(11)==HIGH && digitalRead(12))
  //digitalWrite(13, digitalRead(11) || digitalRead(12));

  /*
  if(digitalRead(11)){ //Latch(Contactor/Relay)
    con=0;
    }
  if(digitalRead(12)){
    con=1;
  }
  
  if(con==0){
    digitalWrite(13, LOW);
  }

  if(con==1){
    digitalWrite(13,HIGH);
  }

  //digitalWrite(13, con);
  */

  /*
  switch (con){
    case 0:
      if(digitalRead(11)||digitalRead(12)){
        con=1;
      }break;
    case 1:
      if(digitalRead(11)||digitalRead(12)){
        con=0;
      }break;
  }

  

  
  
  if(con==0){
    digitalWrite(13, LOW);
  }

  if(con==1){
    digitalWrite(13,HIGH);
  }
  */

   int btn1 = digitalRead(11);
   int btn2 = digitalRead(12);

if(con == 0){
   if(btn1 && !btn2){
      con = 1;
    }
    if(!btn1 && btn2){
      con = 1;
    }
}else{
    if(btn1 && !btn2){
      con = 0;
    }

    if(!btn1 && btn2){
      con = 0;
    }
}
   
   digitalWrite(13,con);
   digitalWrite(10,0);
   delay(50);
   digitalWrite(10,1);
  delay(100);
  

  
}
