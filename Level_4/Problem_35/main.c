/*
Lowest Common Multiple (LCM): The smallest common multiple of any set of natural numbers is referred to as LCM . 
For instance, the LCM of 12, 18, and 24 is 72.
*/

#include <stdio.h>

char is_prime(long);
long LCM(long, long);

int main() {
	long number1 = 20;
	long number2 = 30;
	long result;
	result = LCM(number1, number2);
	printf("Output: %d", result);
}

char is_prime(long number) {
	char result = 1;
	long factor;
	for (factor = 2; factor < number; factor++) {
		if ((number % factor) == 0) {
			result = 0;
		}
	}
	return result;
}

long LCM(long number_1, long number_2) {
	long factor;
	long max_number = 0;
	long min_number = 0;
	long commons = 1;
	long result = 0;
	if (number_1 > number_2) {
		max_number = number_1;
		min_number = number_2;
	} else if (!(number_1 > number_2)){
		max_number = number_2;
		min_number = number_1;
	}
	for (factor = 2; factor <= max_number; factor++) {
		if (is_prime(factor) == 1) {
			if ((min_number % factor == 0) && (max_number % factor == 0)) {
				commons *= factor;
			}
		}
	}
	result = (number_1 * number_2) / commons;
	return result;
}