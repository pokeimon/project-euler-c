/*
 * 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
 * What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
 */
#include <stdio.h>
#include <stdbool.h>

int main() {
	int n = 20;
	int a[20] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
	int i;
	bool divisible = false;
	while (divisible == false) {
		divisible = true;
		for (i = 0; i < 20; i++) {
			if (n % a[i] != 0 && divisible == true) {
				divisible = false;
			}
		}
		if(divisible == false)
			n++;
	}
	printf("Smallest positive number that is evenly divisible by all of the numbers from 1 to 20 is: %d", n);

	return 0;
}