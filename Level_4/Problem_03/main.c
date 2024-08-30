#include <stdio.h>

char get_ones(long);

int main() {
	long num;
	char result;
	printf("Input: ");
	scanf_s("%ld", &num);
	result = get_ones(num);
	printf("Output %d", result);
}

char get_ones(long number) {
	char result;
	result = number % 10;
	return result;
}