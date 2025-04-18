#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

/**
 * Write a program that reads a message, then checks whether it's a palindrome
 * (the letters in the message are the same forwards and backwards)
 * Ignore all characters that aren't letters. Use pointers to keep track
 * of positions in the array.
 */

int main(void)
{
    char buffer[100];
    char *bufferEnd = &buffer[0];

    printf("Enter a message: ");
    char currChar = tolower(getchar());
    while (currChar != '\n')
    {
        if (currChar > 96 && currChar < 123)
        {
            *bufferEnd++ = currChar;
        }

        currChar = tolower(getchar());
    }

    bool isPalindrome = true;
    bufferEnd--;

    for (char *i = &buffer[0]; i <= bufferEnd; i++)
    {
        if (*i != *bufferEnd--)
        {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
    {
        printf("Palindrome");
    } else
    {
        printf("Not palindrome");
    }

    putchar('\n');

    return 0;
}
