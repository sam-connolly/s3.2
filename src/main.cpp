#include <mbed.h>

int main() {
    //PwmOut led(LED3);
    DigitalOut r(LED1);

    r.write(0);
    //led.period(2.0f);
    //led.write(0.5f);
    while(1) ;
}
