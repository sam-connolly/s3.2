#include "mbed.h"

PwmOut sred(D5);
PwmOut sgreen(D9);

const float Freq = 4000;
const int DTms = 20;
int main()
{
  int t = 0;
  float p,q;
  sgreen.period_ms(10);
  sred.period_ms(10);

  while(1){
    float f;
    t += DTms;
    f = t/Freq *2.f * M_PI;
    p = (1+sin(f))/2;
    q = (1+sin(f+M_PI))/2;
    sgreen.write(p);
    sred.write(q);
    wait_ms(DTms);
  }

}
