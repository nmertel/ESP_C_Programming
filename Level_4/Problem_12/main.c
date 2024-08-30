#include <stdio.h>

long reverse_the_number(long);

int main() {
	long num, result;
	printf("Input: ");
	scanf_s("%d", &num);
	result = reverse_the_number(num);
	printf("Output: %d", result);
}

long reverse_the_number(long number) {
	long result = 0;
	while (number != 0) {
		if (result != 0) {
			result *= 10;
		}
		result += (number % 10);
		number /= 10;
	}
	return result;
}