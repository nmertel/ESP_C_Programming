#include <stdio.h>

short sum_of_digits(long);

int main() {
	long number;
	short result;
	printf("Input: ");
	scanf_s("%d", &number);
	result = sum_of_digits(number);
	printf("Output: %d", result);
}

short sum_of_digits(long number) {
	short result = 0;
	while (number != 0) {
		result += (number % 10);
		number /= 10;
	}
	return result;
}