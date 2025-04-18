#include <stdio.h>

/**
 * Write a program that reads a message, then prints the reversal of the 
 * message.
 *
 * Revise the program to use a pointer instead of an integer to keep
 * track of the current position in the array.
 */

int main(void)
{
    char buffer[100];
    char *bufferEnd = &buffer[0];

    printf("Enter a message: ");

    while ((*bufferEnd = getchar()) != '\n')
    {
        bufferEnd++;
    }

    printf("\nReversal is: ");

    while (--bufferEnd >= &buffer[0])
    {
        putchar(*bufferEnd);
    }

    printf("\n");
    return 0;
}
