#include <stdio.h>
#include <stdbool.h>

/**
 * Write a program that tests where two words are anagrams.
 *
 * Include the following functions:
 * read_word(int counts[26]) which
 *  reads the word that the user inputs (will be called twice)
 * equal_array(int counts1[26], int counts2[26]) which
 *  return true if the elements are anagrams, false otherwise.
 */

void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);

int main(void)
{
    int counts1[26] = {0};
    int counts2[26] = {0};

    read_word(counts1);
    read_word(counts2);

    if (equal_array(counts1, counts2))
    {
        printf("The words are anagrams\n");
    } else
    {
        printf("The words are not anagrams\n");
    }

    return 0;
}

void read_word(int counts[26])
{
    printf("Enter word: ");

    char currChar;

    while ((currChar = getchar()) != 10)
    {
        counts[currChar - 'a'] += 1;
    }
}

bool equal_array(int counts1[26], int counts2[26])
{
    for (int i = 0; i < 26; i++)
    {
        if (counts1[i] != counts2[i])
        {
            return false;
        }
    }

    return true;
}
