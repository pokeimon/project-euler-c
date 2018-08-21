/*
 * The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
 * Find the sum of all the primes below two million.
 */
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
	int i;
	for (i = 2; i < n / 2 + 1; i++) {
		if (n % i == 0 && i != n) {
			return false;
		}
	}
	return true;
}

int main() {
	unsigned long long sum = 0ull;
	int i;

	for (i = 2; i < 2000000; i++) {
		if (isPrime(i)) {
			sum += i;
		}
	}

	printf("The sum of all the primes below two million: %llu", sum);

	return 0;
}