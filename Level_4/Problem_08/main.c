#include <stdio.h>

long reverse_the_num(long);

int main() {
	long num, result;
	printf("Input: ");
	scanf_s("%d", &num);
	result = reverse_the_num(num);
	printf("Output: %d", result);
}

long reverse_the_num(long num) {	
	long result;
	result = num / 1000 + 10 * ((num / 100) % 10) + 100 * ((num / 10) % 10) + 1000 * (num % 10);
	return result;
}