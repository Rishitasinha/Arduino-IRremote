#include <IRremote.h>
#include <IRremoteInt.h>


int RECV_PIN=11;

IRrecv irrecv(RECV_PIN);
decode_results results ;

void setup()
}
  pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
Serial.begin(9600);
irrecv.enableIRIn();
}

void loop() 
{
if(irrecv.decode(&results))
{
  Serial.println(results.value,HEX);
 translateIR();
  irrecv.resume();
}
}
void translateIR()
{
  switch(results.value)
  {
    case :
    digitalWrite(3,LOW);
    break;
     case 0x80BF4BB4:
     digitalWrite(3,HIGH);
    
     break;
    case 0x80BF837C:
    digitalWrite(4,LOW);
     break;
    case 0x80BF9966:
    digitalWrite(4,HIGH);
     break;
  }
}
