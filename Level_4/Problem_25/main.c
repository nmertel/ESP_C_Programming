#include <stdio.h>

char is_prime(long);

int main() {
	long sum = 0;
	long number;
	for (number = 100; number < 1000; number++) {
		if (is_prime(number) == 1) {
			sum += number;
		}
	}
	printf("Output: %d", sum);
}

char is_prime(long number) {
	char result = 1;
	long quotient;
	for (quotient = 2; quotient < number; quotient++) {
		if ((number % quotient) == 0) {
			result = 0;
		}
	}
	if (number == 0 || number == 1) {
		result = 0;
	}
	return result;
}