#include "mbed.h"

PwmOut sred(D5);

int main()
{
DigitalOut green(D6);
green.write(1);

  sred.period_ms(10);/* suitably fast 100Hz */

  while(1){
      /* ramp up from 0 to 100% */
      float duty;
      for( duty=0 ; duty<1.0 ; duty+=0.01 ) {
          sred.write(duty);
          wait_ms(100);
      }

  }

}
