int lmp=3;
int lmn=5;
int rmp=6;
int rmn=9;

void setup() {
  
  Serial.begin(9600);

  pinMode(lmp,OUTPUT);
  pinMode(lmn,OUTPUT);
  pinMode(rmp,OUTPUT);
  pinMode(rmn,OUTPUT);
  
}

void loop() {

  if(Serial.available() >0)
  {
    char receive = Serial.read();
    Serial.println(receive);
    if( receive == '0' || receive=='s')
    {77
      stop_all();
      Serial.println(receive);
     }
     else if ( receive == '1'){
      stop_all();
        digitalWrite(lmp,0);
        digitalWrite(lmn,0);
        digitalWrite(rmp,1);
        digitalWrite(rmn,0);
        }
      else if(receive == '2'){
        stop_all();
        digitalWrite(lmp,1);
        digitalWrite(lmn,0);
        digitalWrite(rmp,0);
        digitalWrite(rmn,0);
        }
      else if(receive == '3'){
        stop_all();
        digitalWrite(lmp,0);
        digitalWrite(lmn,1);
        digitalWrite(rmp,0);
        digitalWrite(rmn,1);
        
      }
      else if(receive == '4'){
        stop_all();
        digitalWrite(lmp,0);
        digitalWrite(lmn,1);
        digitalWrite(rmp,0);
        digitalWrite(rmn,1);
        
        }
      else if(receive == '5'){
        stop_all();
        digitalWrite(lmp,1);
        digitalWrite(lmn,0);
        digitalWrite(rmp,1);
        digitalWrite(rmn,0);
        }
    }
}


void stop_all(){
  
  digitalWrite(lmp,LOW);
    digitalWrite(lmn,LOW);
      digitalWrite(rmp,LOW);
        digitalWrite(rmn,LOW);
}
