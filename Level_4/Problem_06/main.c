#include <stdio.h>

long reverse_the_number(long);

int main() {
	long num, result;
	printf("Input: ");
	scanf_s("%d", &num);
	result = reverse_the_number(num);
	printf("Output: %d", result);
	return 0;
}

long reverse_the_number(long number) {
	long result;
	result = (number / 10) + 10 * (number % 10);
	return result;
}