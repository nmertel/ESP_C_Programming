#include <stdio.h>

char is_prime(long);

int main() {
	long result = 0;
	long number;
	for (number = 100; number < 1000; number++) {
		if (is_prime(number) == 1) {
			result = number;
			break;
		}
	}
	printf("Output: %d", result);
}

char is_prime(long number) {
	char result = 1;
	long quotient;
	for (quotient = 2; quotient < number; quotient++) {
		if ((number % quotient) == 0) {
			result = 0;
		}
	}
	return result;
}