#include <stdio.h>

int get_ones(int);

int main() {
	int num, result;
	printf("Input: ");
	scanf_s("%d", &num);
	result = get_ones(num);
	printf("%d", result);
	return 0;
}

int get_ones(int num) {
	int result = num % 10;
	return result;
}