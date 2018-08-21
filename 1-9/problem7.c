/*
 * By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
 * What is the 10,001st prime number?
 */
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
	int i;
	for (i = 2; i < n/2+1; i++) {
		if (n % i == 0 && i != n) {
			return false;
		}
	}
	return true;
}

int main() {
	
	int n = 1;
	int i = 0;
	while (i < 10001) {
		n++;
		while (true) {
			if (isPrime(n)) {
				i++;
				break;
			}
			else {
				n++;
			}
		}
	}
	printf("The 10,001st prime number is: %d", n);

	return 0;
}