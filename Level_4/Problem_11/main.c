#include <stdio.h>

char sum_of_digits(long);

int main() {
	long num;
	char result;
	printf("Input: ");
	scanf_s("%d", &num);
	result = sum_of_digits(num);
	printf("Output: %d", result);
}

char sum_of_digits(long num) {
	char result = 0;
	while (num != 0) {
		result += (num % 10);
		num /= 10;
	}
	return result;
}