#include "mbed.h"

//PwmOut   sred(D5);
PwmOut sgreen(D9);

int main()
{
  /*
    float f;
    while(1) {
        for (f = 1.00; f > 0; f-=0.01 ) {
            sred.write(f);
            printf(" %f \n", f);
            wait(0.5);
        }
    }
  */
  sgreen.period(4.0f);
  sgreen.write(0.25f);
  while(1);
}
