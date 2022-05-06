#include <mbed.h>
// #include <SDBlockDevice.h>
// #include <USBMSD.h>

// SDBlockDevice sd;
// USBMSD usb(&sd);

/* 1000 msec = 1 sec */
#define SLEEP_TIME_MS   200

DigitalOut led(LED1);

int main() {
	while (1) {
		// usb.process();
		led = !led;
		thread_sleep_for(SLEEP_TIME_MS);
	}
}
