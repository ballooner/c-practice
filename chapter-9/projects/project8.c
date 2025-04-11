#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

/**
 * Write a program to simulate the game of craps.
 * Include two functions:
 * int roll_dice(void);
 * bool play_game(void);
 */

int roll_dice(void);
bool play_game(void);

int main(void)
{
    char input = 'y';
    int winCount = 0;
    int loseCount = 0;

    srand((unsigned) time(NULL));

    while (tolower(input) != 'n')
    {
        if (play_game())
        {
            winCount++;
        }else 
        {
            loseCount++;
        }

        printf("\nPlay again? ");
        scanf(" %c", &input);
        putchar('\n');
   }

    printf("Wins: %-3d Losses: %d\n", winCount, loseCount);
}

bool play_game(void)
{
    int diceTotal = roll_dice() + roll_dice();
    int point;

    printf("You rolled: %d\n", diceTotal);

    if (diceTotal == 7 || diceTotal == 11)
    {
        printf("You win!\n");
        return true;
    } else if (diceTotal == 2 || diceTotal == 3 || diceTotal == 12)
    {
        printf("You lose!\n");
        return false;
    }

    point = diceTotal;
    printf("Your point is %d\n", point);

    while (1)
    {
        diceTotal = roll_dice() + roll_dice();

        printf("You rolled: %d\n", diceTotal);

        if (diceTotal == point)
        {
            printf("You win!\n");
            return true;
        } else if (diceTotal == 7)
        {
            printf("You lose!\n");
            return false;
        }
    }
}

int roll_dice(void)
{
    return rand() % 6 + 1;
}
