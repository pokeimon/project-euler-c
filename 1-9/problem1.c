#include <stdio.h>
/*
 * The prime factors of 13195 are 5, 7, 13 and 29.
 * What is the largest prime factor of the number 60851475143 ?
 */
int  main() {

	int sum = 0;
	int i = 0;

	for (i; i < 1000; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			sum += i;
		}
	}
	printf("Value is: %d", sum);
	
	return 0;
}