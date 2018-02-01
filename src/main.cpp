#include "mbed.h"

PwmOut red(D5);

int main()
{
    red.period_ms(10);/* suitably fast 100Hz */

    AnalogIn right(A1);
    float rightVolt;

    while(1){
        rightVolt = 3.3*(right.read());

        /* ramp up from 0 to 100% */
        float duty;
        for ( duty=0 ; duty<4.6 ; duty+=0.23 ) {
            float brightness = exp(duty)/100;
            red.write(right.read());
            wait_ms(100);
            printf("The brightness is %f\n", brightness);
        }
    }
}
