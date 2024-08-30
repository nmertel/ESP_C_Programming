#include <stdio.h>

char get_tens(long);

int main() {
	long number;
	char result;
	printf("Input: ");
	scanf_s("%ld", &number);
	result = get_tens(number);
	printf("Output: %d", result);
	return 0;
}

char get_tens(long number) {
	char result;
	result = (number / 10) % 10;
	return result;
}