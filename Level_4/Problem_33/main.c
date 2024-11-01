#include <stdio.h>

char is_non_decreasing(long);

int main() {
	long counter = 0;
	long number;
	for (number = 1000; number <= 9999; number++) {
		if (is_non_decreasing(number) == 1) {
			counter++;
			printf("Number: %d, Counter: %d\n", number, counter);
		}
	}

	printf("Result: %d", counter);
}

char is_non_decreasing(long number) {
	long division = 1000;
	char result = 1;
	char digits[4];
	char i;
	for (i = 0; i < 4; i++) {
		digits[i] = number / division;
		number %= division;
		division /= 10;
	}

	for (i = 0; i < 3; i++) {
		if (!(digits[i] <= digits[i + 1])) {
			result = 0;
			break;
		}
	}

	return result;
}