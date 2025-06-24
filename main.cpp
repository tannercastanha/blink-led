#include "pico/stdlib.h"
#include "pico/cyw43_arch.h"

int main() {
    stdio_init_all();

    // Initialize the Wi-Fi chip (required to access the LED)
    if (cyw43_arch_init()) {
        return -1; // Init failed
    }

    while (true) {
        cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 1); // LED ON
        sleep_ms(500);
        cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 0); // LED OFF
        sleep_ms(500);
    }
}
