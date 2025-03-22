#include <stdio.h>

/**
 * Write a program that reads an integer entered by the user and displays it in octal (base 8);
 */

int main(void)
{
    int numInput;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &numInput);

    printf("In octal, your number is: %.5o\n", numInput);

    return 0;
}