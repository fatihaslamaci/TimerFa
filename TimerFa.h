#ifndef TimerFa_h
#define TimerFa_h

class TimerFa {
  public:
    bool MicrosaniyedeBir(unsigned long);
    void Reset();
  private:
    volatile unsigned long SonOkunanMicrosaniye=0;
 };

#endif
