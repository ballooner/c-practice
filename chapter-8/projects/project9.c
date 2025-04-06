#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Write a program that generates a random "walk" across a 10x10 array.
 * The array contains characters of all '.' initially.
 * The program must randomly "walk" the array, starting in the top right.
 * Each "step" is up, right, down or left.
 * These steps will be marked by a character 'A' through 'Z' and the walk
 * will end once the character hits 'Z' or has nowhere to go.
 */

int main(void)
{
    char container[10][10]; 

    for (int i = 0; i < 10; i++) 
    {
        for (int j = 0; j < 10; j++)
        {
            container[i][j] = '.';
        }
    }
    container[0][0] = 'A';

    srand(time(NULL));
    char currChar = 'B';
    int currRow = 0;
    int currCol = 0;

    while(currChar <= 'Z')
    {
        //Check that we have a valid space to walk to
        if ((currRow - 1 < 0 || container[currRow - 1][currCol] != '.') &&
            (currRow + 1 > 9 || container[currRow + 1][currCol] != '.') &&
            (currCol - 1 < 0 || container[currRow][currCol - 1] != '.') &&
            (currCol + 1 > 9 || container[currRow][currCol + 1] != '.'))
        {
            printf("Exit early: no valid space\n");
            break;
        }

        //Generate a random direction where:
        //0 is Up
        //1 is Right
        //2 is Down
        //3 is Left
        int walkDirection = rand() % 4;

        //If going up, check that it is valid.
        if (walkDirection == 0 
                && currRow - 1 >= 0 
                && container[currRow - 1][currCol] == '.')
        {
            container[--currRow][currCol] = currChar++;
        }

        //If going right, check that it is valid.
        if (walkDirection == 1
                && currCol + 1 <= 9
                && container[currRow][currCol + 1] == '.')
        {
            container[currRow][++currCol] = currChar++;
        }

        //If going down, check that it is valid.
        if (walkDirection == 2
                && currRow + 1 <= 9
                && container[currRow + 1][currCol] == '.')
        {
            container[++currRow][currCol] = currChar++;
        }

        //If going left, check that it is valid.
        if (walkDirection == 3
                && currCol - 1 >= 0
                && container[currRow][currCol - 1] == '.')
        {
            container[currRow][--currCol] = currChar++;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            putchar(container[i][j]);
        }
        putchar('\n');
    }

    putchar('\n');

    return 0;
}
