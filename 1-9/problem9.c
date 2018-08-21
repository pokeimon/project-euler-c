/*
 * A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
 * a^2 + b^2 = c^2
 * For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.
 * There exists exactly one Pythagorean triplet for which a + b + c = 1000.
 * Find the product abc.
 */
#include <stdio.h>
#include <math.h>

int main() {

	double a = 0, b = 0, c = 0;
	while (a + b + c != 1000) {
		a++;
		b = 0;
		while (a + b + c < 1000) {
			c = pow(a, 2) + pow(b, 2);
			c = sqrt(c);
			if (a + b + c != 1000) {
				b++;
			}
		}
	}

	printf("The product of abc is: %f", a*b*c);

	return 0;
}