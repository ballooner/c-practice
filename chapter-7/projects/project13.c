#include <stdio.h>

/**
 * Write a program that calculates the average word length for a sentence.
 */

int main(void)
{
    printf("Enter a sentence: ");

    int totalWordLength = 0;
    int totalWords = 1;

    char currentChar = getchar();

    while (currentChar != 10)
    {
        if (currentChar != ' ')
        {
            totalWordLength += 1;
        } else 
        {
            totalWords += 1;
        }

        currentChar = getchar();
    }

    printf("Average word length: %.1f\n", (float) totalWordLength / totalWords);

    return 0;
}