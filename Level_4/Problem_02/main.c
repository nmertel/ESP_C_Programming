#include <stdio.h>

char get_tens(long);

int main() {
	long num;
	char result;
	printf("Input: ");
	scanf_s("%ld", &num);
	result = get_tens(num);
	printf("Output: %d", result);
	return 0;
}

char get_tens(long number) {
	char result = number / 10;
	return result;
}