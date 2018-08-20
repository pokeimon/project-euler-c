#include <stdio.h>

int main() {

	int out = 0;
	int i = 0;

	for (i; i < 1000; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			out += i;
		}
	}
	printf("Value is: %d", out);
}