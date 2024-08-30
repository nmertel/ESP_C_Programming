#include <stdio.h>

char get_hundreds(long);

int main() {
	long num;
	char result;
	printf("Input: ");
	scanf_s("%d", &num);
	result = get_hundreds(num);
	printf("Output: %d", result);
	return 0;
}

char get_hundreds(long number) {
	char result;
	result = number / 100;
	return result;
}