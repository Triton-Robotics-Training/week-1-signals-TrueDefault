//STARTER 
//THIS EXERCISE IS TO BE DONE IN THE ARM MBED SIMULATOR
//http://195.130.59.221/
//IF YOU HAVE ISSUES WITH THE SIMULATOR, CONTACT EMBEDDED LEAD
#include "mbed.h"

AnalogIn pot(p15); 
DigitalOut led(LED1);

int main() {
    float total_period_ms = 2000.0f; 

    while (1) {
        printf("Week 1 Exercise 2");
        
        float percentage = pot.read();

        int on_time = percentage * total_period_ms;
        int off_time = (1.0f - percentage) * total_period_ms;

        led = 1;
        wait_ms(on_time);

        led = 0;
        wait_ms(off_time);
    }
}
