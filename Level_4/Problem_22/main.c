#include <stdio.h>

char is_prime(long);

int main() {
	short counter = 0;
	short number;
	for (number = 100; number < 1000; number++) {
		if (is_prime(number) == 1) {
			counter++;
		}
	}
	printf("Result: %d", counter);
}

char is_prime(short number) {
	char result = 1;
	short divider;
	for (divider = 2; divider < number; divider++) {
		if ((number % divider) == 0) {
			result = 0;
		}
	}
	return result;
}