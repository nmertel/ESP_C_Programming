#include <stdio.h>

char is_palindrome(long);
long reverse_the_number(long);

int main() {
	long number;
	long counter = 0;
	for (number = 11; number < 100000; number++) {
		if (is_palindrome(number) == 1) {
			counter++;
			printf("Number: %d, Counter: %d\n", number, counter);
		}
	}
}

char is_palindrome(long number) {
	char result = 0;
	long reversed_number = reverse_the_number(number);
	if (number == reversed_number) {
		result = 1;
	}
	return result;
}

long reverse_the_number(long number) {
	long reversed_number = 0;
	char digit;
	while (number != 0) {
		digit = number % 10;
		reversed_number = reversed_number * 10 + digit;
		number /= 10;
	}
	return reversed_number;
}