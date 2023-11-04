#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * Function to check if a string contains only digits.
 * isNumeric - Func
 * multiplyStrings - 
 * Return: 0
 */
int isNumeric(const char *str);
char *multiplyStrings(const char *num1, const char *num2);
{
int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Error\n");
        return 98;
    }

    // Check if both input strings are composed of digits
    if (!isNumeric(argv[1]) || !isNumeric(argv[2])) {
        printf("Error\n");
        return 98;
    }

    const char *num1 = argv[1];
    const char *num2 = argv[2];

    char *result = multiplyStrings(num1, num2);

    if (result) {
        printf("%s\n", result);
        free(result);
    } else {
        printf("Error\n");
        return 98;
    }

    return (0);
}
}
