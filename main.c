#include "pico/sdlib.h"

int main(){
    const uint led_pin = 25;

    gpio_init(led_pin);
    gpio_set_dir(led_pin, GPIO_OUT);

    while(true){
        gpio_put(led_pin, true);
        sleeps_ms(1000);
        gpio_put(led_pin, false);
        sleeps_ms(1000);
    }
}
