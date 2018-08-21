/*
 * A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
 * Find the largest palindrome made from the product of two 3-digit numbers.
 */
#include <stdio.h>
#include <stdbool.h>

int reverse(int n) {
	int reversed = 0;
	while (n > 0) {
		reversed = (10 * reversed) + (n % 10);
		n = n / 10;
	}
	return reversed;
}

bool isPalindrome(n) {
	return n == reverse(n);
}

int main() {

	int a = 100, b = 0, p = 0;
	while (a <= 999) {
		b = 100;
		while (b <= 999) {
			if (isPalindrome(a*b) && a*b > p) {
				p = a * b;
			}
			b = b + 1;
		}
		a = a + 1;
	}

	printf("Largest palindrome made from the product of two 3-digit numbers is: %d", p);

	return 0;
}