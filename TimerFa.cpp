#include <Arduino.h>
#include "TimerFa.h"


bool TimerFa::MicrosaniyedeBir(unsigned long BeklemeSuresi)
{
  volatile bool R = false;
  volatile unsigned long now = micros();
  volatile unsigned long fark = now - BeklemeSuresi;
  if (SonOkunanMicrosaniye > now)
  {
    SonOkunanMicrosaniye = 0;
  }
  if ((SonOkunanMicrosaniye < fark) && (BeklemeSuresi < now))
  {
    SonOkunanMicrosaniye = now - (now - SonOkunanMicrosaniye - BeklemeSuresi);
    R = true;
  }
  return R;
  
}

void TimerFa::Reset()
{
    SonOkunanMicrosaniye=micros();
}


