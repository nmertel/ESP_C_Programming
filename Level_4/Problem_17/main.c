#include <stdio.h>

char is_odd(long);

int main() {
	short i, sum = 0;
	for (i = 0; i < 10; i++) {
		if (is_odd(i) == 1) {
			sum += i;
		}
	}
	printf("Output: %d", sum);
}

char is_odd(long number) {
	char result;
	if ((number % 2) == 1) {
		result = 1;
	}
	else {
		result = 0;
	}
	return result;
}