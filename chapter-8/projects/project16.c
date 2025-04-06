#include <stdio.h>

/**
 * Write a program that tests where two words are anagrams.
 */

int main(void)
{
    int charValues[26] = {0};

    printf("Enter first word: ");

    char currChar;

    while ((currChar = getchar()) != 10)
    {
        charValues[currChar - 'a'] += 1;
    }

    printf("Enter second word: ");

    while ((currChar = getchar()) != 10)
    {
        charValues[currChar - 'a'] -= 1;
    }

    for (int i = 0; i < 26; i++)
    {
        if (charValues[i] != 0)
        {
            printf("The words are not anagrams\n");
            return 0;
        }
    }

    printf("The words are anagrams\n");

    return 0;
}
