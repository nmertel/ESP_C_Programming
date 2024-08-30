#include <stdio.h>

short sum_of_digits(long);

int main() {
	long num;
	short result;
	printf("Input: ");
	scanf_s("%d", &num);
	result = sum_of_digits(num);
	printf("Output: %d", result);
	return 0;
}

short sum_of_digits(long number) {
	short result;
	result = (number % 10) + (number / 10);
	return result;
}