#include "quercus/quercus_lib_pico.h"
#include "quercus/libc_builtin.h"

export int main(void) {
	// int i = 0;
	while (1) {
		// i = i + 1;
		led_set_color(0xFF0000);
		sleep(1000);
		led_set_color(0x000000);
		sleep(1000);
	}

	return 0;
}
