#include <Arduino.h>
#include "TimerFa.h"


bool TimerFa::MicrosaniyedeBir(unsigned long BeklemeSuresi)
{
  volatile bool R=false;
 
  volatile unsigned long fark = micros() - BeklemeSuresi;
  
  if (SonOkunanMicrosaniye < fark)
  {
    SonOkunanMicrosaniye=micros();
    R=true;
  }
  return R;
  
}

void TimerFa::Reset()
{
    SonOkunanMicrosaniye=micros();
}


