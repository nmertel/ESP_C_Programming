#include <stdio.h>

char num_of_zeros(long);

int main() {
	long result = 0;
	long number;
	for (number = 0; number <= 1000; number++) {
		result += num_of_zeros(number);
	}
	printf("Output: %d", result);
}

char num_of_zeros(long number) {
	char total_zeros = 0;

	if (number == 0) {
		return ++total_zeros;
	}

	while (number != 0) {
		if (number % 10 == 0) {
			total_zeros++;
		}
		number /= 10;
	}
	return total_zeros;
}