#include <stdio.h>

/**
 * Write a program to fill an array with the first 40 fibonacci sequence numbers.
 */

int main(void)
{
    long fibonacciNumbers[40] = {0, 1};

    for (int i = 2; i < 40; i++)
    {
        fibonacciNumbers[i] = fibonacciNumbers[i -  1] + fibonacciNumbers[i -  2];
    }

    for (int i = 0; i < 40; i++)
    {
        printf("%ld ", fibonacciNumbers[i]);
    }
    printf("\n");

    return 0;
}