#include <Arduino.h>
#include "TimerFa.h"
#include <limits.h>


bool TimerFa::MicrosaniyedeBir(unsigned long BeklemeSuresi)
{
  volatile bool R = false;
  volatile unsigned long now = micros();
  if (SonOkunanMicrosaniye > now)
  {
    ArtikSure=ULONG_MAX - SonOkunanMicrosaniye;
    SonOkunanMicrosaniye = 0;
  }
  volatile unsigned long fark = now - BeklemeSuresi-ArtikSure;
  if ((SonOkunanMicrosaniye < fark) && (BeklemeSuresi < now))
  {
    SonOkunanMicrosaniye = now - (now - SonOkunanMicrosaniye - BeklemeSuresi)-ArtikSure;
    ArtikSure=0;
    R = true;
  }
  return R;
}

void TimerFa::Reset()
{
    SonOkunanMicrosaniye=micros();
    ArtikSure=0;
}





