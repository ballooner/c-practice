#include <stdio.h>
#include <ctype.h>

/**
 * Modify Project 5 from Chapter 7 to store the SCRABBLE values in an array.
 * The array will have 26 elemenets, one for each letter of the alphabet.
 * These elements will store the point value of each letter.
 */

int main(void)
{
    int letterValues[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10,
                            1, 1, 1, 1, 4, 4, 8, 4, 10};

     printf("Enter a word: ");

     int score = 0;
     char currChar = getchar();

     while(currChar != 10)
     {
         score += letterValues[tolower(currChar) - 'a'];
         currChar = getchar();
     }

    printf("Scrabble value: %d\n", score);

    return 0;
}
