#include "quercus_lib_pico.h"

#include "libc_builtin.h"

export int main(void) {
	while (1) {
		led_set_color(0x0000FF);
		sleep(1000);
		led_set_color(0x000000);
		sleep(1000);
	}

	return 0;
}
