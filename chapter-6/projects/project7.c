#include <stdio.h>

/**
 * Rearrange the square3.c program so that the for loop initializes i, test i and increments i.
 */

int main(void)
{
    int n;

    printf("This program prints a table of squares.\n");
    printf("Enter a number of entries in table: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%10d%10d\n", i, i * i);
    }

    return 0;
}