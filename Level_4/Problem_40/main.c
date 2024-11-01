#include <stdio.h>

char* integer_to_string(long, char*);

int main() {
    long number = 12340;
    char buffer[20];
    char* string = integer_to_string(number, buffer);
    printf("%s\n", string);
    return 0;
}

char* integer_to_string(long number, char* result) {
    char i = 0;
    char j;
    char len = 0;
    char temp_x[20];

    while (number != 0) {
        result[i++] = (number % 10) + '0';      // integer to symbol conversion
        number /= 10;
        len++;                                  // length of the number
    }

    i = 0;
    j = len - 1;

    // Reverse the string 
    while (j >= 0) {
        temp_x[i++] = result[j--];
    }

    // Copy the reversed string back to the result
    for (i = 0; i < len; i++) {
        result[i] = temp_x[i];
    }

    result[i] = '\0';  // Ensure result is null-terminated

    return result;
}