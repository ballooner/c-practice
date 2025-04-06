#include <stdio.h>

/**
 * Write a program that reverses the words in a sentence.
 */

int main(void)
{
    char sentence[100];

    printf("Enter a sentence: ");

    char currChar = getchar();
    int iterator = 0;

    while (currChar != 10)
    {
        sentence[iterator++] = currChar;
        currChar = getchar();
    }

    char punctuation = sentence[iterator - 1];

    int endOfWord = iterator - 1;

    for (int i = endOfWord; i >= 0; i--)
    {
        if (sentence[i] == ' ' || i == 0)
        {
            if (i == 0)
            {
                putchar(sentence[0]);
            }

            for (int j = i + 1; j < endOfWord; j++)
            {
                putchar(sentence[j]);
            }
            endOfWord = i;

            if (i != 0)
            {
                putchar(' ');
            }
        }
    }

    printf("%c\n", punctuation);

    return 0;
}
