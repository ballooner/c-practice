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
 *
 * Use two functions:
 * generate_random_walk(char walk[10][10])
 *  which initializes the array to contain '.' and does the walk.
 *
 * print_array(char walk[10][10])
 *  which displays the array on screen.
 */

void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);

int main(void)
{
    char walk[10][10]; 

    generate_random_walk(walk);
    print_array(walk);

    return 0;
}

void generate_random_walk(char walk[10][10])
{
    for (int i = 0; i < 10; i++) 
    {
        for (int j = 0; j < 10; j++)
        {
            walk[i][j] = '.';
        }
    }
    walk[0][0] = 'A';

    srand(time(NULL));
    char currChar = 'B';
    int currRow = 0;
    int currCol = 0;

    while(currChar <= 'Z')
    {
        //Check that we have a valid space to walk to
        if ((currRow - 1 < 0 || walk[currRow - 1][currCol] != '.') &&
            (currRow + 1 > 9 || walk[currRow + 1][currCol] != '.') &&
            (currCol - 1 < 0 || walk[currRow][currCol - 1] != '.') &&
            (currCol + 1 > 9 || walk[currRow][currCol + 1] != '.'))
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
                && walk[currRow - 1][currCol] == '.')
        {
            walk[--currRow][currCol] = currChar++;
        }

        //If going right, check that it is valid.
        if (walkDirection == 1
                && currCol + 1 <= 9
                && walk[currRow][currCol + 1] == '.')
        {
            walk[currRow][++currCol] = currChar++;
        }

        //If going down, check that it is valid.
        if (walkDirection == 2
                && currRow + 1 <= 9
                && walk[currRow + 1][currCol] == '.')
        {
            walk[++currRow][currCol] = currChar++;
        }

        //If going left, check that it is valid.
        if (walkDirection == 3
                && currCol - 1 >= 0
                && walk[currRow][currCol - 1] == '.')
        {
            walk[currRow][--currCol] = currChar++;
        }
    }
}

void print_array(char walk[10][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            putchar(walk[i][j]);
        }
        putchar('\n');
    }

    putchar('\n');
}
