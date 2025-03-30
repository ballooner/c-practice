#include <stdio.h>
#include <ctype.h>

/**
 * Write a program that counts the number of vowels in a sentence
 */

int main(void)
{
    printf("Enter a sentence: ");

    int vowelCount = 0;
    char currentChar = toupper(getchar());

    while (currentChar != 10)
    {
        if (currentChar == 'A' || currentChar == 'E' || currentChar == 'I' || currentChar == 'O' || currentChar == 'U')
        {
            vowelCount += 1;
        }

        currentChar = toupper(getchar());
    }

    printf("Your sentence contains %d vowels.\n", vowelCount);

    return 0;
}