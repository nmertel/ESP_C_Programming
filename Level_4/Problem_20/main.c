#include <stdio.h>

char is_prime(char);

int main() {
	char counter = 0, i;
	for (i = 0; i < 10; i++) {
		if (is_prime(i) == 1) {
			counter++;
		}
	}
	printf("Output: %d", counter);
}

char is_prime(char number) {
	char result = 1;
	char bolunen;
	for (bolunen = 2; bolunen <= number; bolunen++) {
		if (number != bolunen) {
			if ((number % bolunen) == 0) {
				result = 0;
			}
		}
	}
	if (number < 2) {
		result = 0;
	}
	return result;
}