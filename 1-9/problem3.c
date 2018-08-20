/*
 * The prime factors of 13195 are 5, 7, 13 and 29.
 * What is the largest prime factor of the number 600851475143 ?
 */
#include <stdio.h>
#include <math.h>

int main() {

	unsigned long long num = 600851475143;
	unsigned long long largestPrime = 0;
	unsigned long long i = 2ull;

	for (i; i <= num; i++) {
		while (num % i == 0) {
			largestPrime = i;
			num /= i;
		}
	}

	printf("Largest prime factor of 600851475143 is: %llu", largestPrime);

	return 0;
}