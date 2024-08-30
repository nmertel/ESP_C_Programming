#include <stdio.h>

char is_odd(long);

int main() {
	char i, counter = 0;
	for (i = 10; i < 100; i++) {
		if (is_odd(i) == 1) {
			counter++;
		}
	}
	printf("Output: %d", counter);
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