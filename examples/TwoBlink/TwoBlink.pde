#include <TimerFa.h>

TimerFa TimerLed1;
TimerFa TimerLed2;

int Led1=13;
int Led2=9;

void setup(void)
{
  pinMode(Led1, OUTPUT);
  pinMode(Led2, OUTPUT);
}

void loop(void)
{
  if (TimerLed1.MicrosaniyedeBir(1000000L)) {
       digitalWrite(Led1,!digitalRead(Led1) );
  }
  if (TimerLed2.MicrosaniyedeBir(500000L)) {
      digitalWrite(Led2,!digitalRead(Led2) );
  }
}