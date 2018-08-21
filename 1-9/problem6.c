/*
 * The difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.
 * Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
 */
#include <stdio.h>


int main() {
	long a = 0; 
	long b = 0;
	int i;
	for (i = 1; i <= 100; i++) {
		a += i * i;
	}
	for (i = 1; i <= 100; i++) {
		b += i;
	}
	b = b * b;
	
	printf("The difference between the sum of the squares of the first one hundred natural numbers and the square of the sum is: %ld", b-a);

	return 0;
}