#include <stdbool.h> 
#include <stdio.h>

/**
 * Modify the repdigit.c program of Section 8.1 so that it prints a table showing how many times each digit appears in the number.
 */

int main(void)
{
    int digitRepeated[10] = {0};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0)
    {
        digit = n % 10;
        
        digitRepeated[digit] += 1;

        n /= 10;
    }

    printf("Digit:      ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", i);
    }

    printf("\nOccurences: ");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", digitRepeated[i]);
    }

    printf("\n");

    return 0;
}