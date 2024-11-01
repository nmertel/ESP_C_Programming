// Question: Get a String and print the same. 

#include <stdio.h>

int main() {
	char* string = "Hello World";
	char i = 0;

	while (string[i] != '\0') {
		printf("%c", string[i++]);
	}
}