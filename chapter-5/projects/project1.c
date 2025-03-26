#include <stdio.h>

/**
 * Write a program that calculates how many digits a number contains.
 * You may assume the number has no more than four digits.
 */

int main(void)
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number >= 1000)
    {
        printf("The number %d has 4 digits\n", number);
    } else if (number >= 100)
    {
        printf("The number %d has 3 digits\n", number);
    } else if (number >= 10)
    {
        printf("The number %d has 2 digits\n", number);
    }else
    {
        printf("The number %d has 1 digit\n", number);
    }


    return 0;
}