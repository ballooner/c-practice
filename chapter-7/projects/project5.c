#include <stdio.h>

/**
 * Write a program that comptues the value of a scrabble word by summing the values of its letters.
 */

int main(void)
{
    printf("Enter a word: ");

    int sum = 0;
    char currentLetter = toupper(getchar());

    while (currentLetter != 10)
    {
        if (currentLetter == 'Q' || currentLetter == 'Z')
        {
            sum += 10;
        } else if (currentLetter == 'J' || currentLetter == 'X')
        {
            sum += 8;
        } else if (currentLetter == 'K')
        {
            sum += 5;
        } else if (currentLetter == 'F' || currentLetter == 'H' || currentLetter == 'V' || currentLetter == 'Y' || currentLetter == 'W')
        {
            sum += 4;
        } else if (currentLetter == 'B' || currentLetter == 'C' || currentLetter == 'M' || currentLetter == 'P')
        {
            sum += 3;
        } else if (currentLetter == 'D' || currentLetter == 'G')
        {
            sum += 2;
        } else
        {
            sum++;
        }

        currentLetter = toupper(getchar());
    }

    printf("Scrabble value: %d\n", sum);

    return 0;
}