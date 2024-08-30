#include <stdio.h>

char is_prime(long);

int main() {
	char counter = 0;
	long number;
	for (number = 10; number < 100; number++) {
		if (is_prime(number) == 1) {
			counter++;
		}
	}
	printf("Result: %d", counter);
}

char is_prime(long number) {
	char result = 1;
	long divider;
	for (divider = 2; divider < number; divider++) {
		if ((number % divider) == 0) {
			result = 0;
		}
	}
	return result;
}