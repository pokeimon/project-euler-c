﻿/*
 * The following iterative sequence is defined for the set of positive integers:
 *		n → n/2 (n is even)
 *		n → 3n + 1 (n is odd)
 * Using the rule above and starting with 13, we generate the following sequence:
 *		13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
 * It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.
 * Which starting number, under one million, produces the longest chain?
 * NOTE: Once the chain starts the terms are allowed to go above one million.
 */
#include <stdio.h>

int main() {
	long chain = 0;
	long longestChain = 0;
	int longestNum = 0;
	unsigned long curr = 0;
	
	int i;
	for (i = 13; i < 1000000; i++) {
		curr = i;
		chain = 0;
		while (curr != 1) {
			if (curr % 2 == 0) {
				curr /= 2;
			}
			else {
				curr *= 3;
				curr++;
			}
			chain++;
		}
		if (chain > longestChain) {
			longestChain = chain;
			longestNum = i;
		}
	}
	printf("The starting number, under one million, produces the longest chain is: %d", longestNum);

	return 0;
}