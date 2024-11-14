#include <stdio.h>
#include <stdint.h>

typedef struct {
	uint8_t cid;
	int (*add) (int, int);
} Calculator_t;

int add (int a, int b);

int main(void) {
	Calculator_t calc = {
		.cid = 0,
		.add = &add,
	};

	int result = calc.add(1,2);
	printf("result: %d", result);
}

int add (int a, int b) {
	return a + b;
}
