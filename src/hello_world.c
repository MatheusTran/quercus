#include "quercus/quercus_lib_pico.h"
#include "quercus/libc_builtin.h"

export int main(void) {
	while (1) {
        printf("hello world!\n");
		sleep(1000);
	}

	return 0;
}
