#include <stdio.h>

/**
 * Create a program that makes a n x n magic square array.
 */

int main(void)
{
    int n;
    printf("Enter an odd number between 1 and 99: ");
    scanf("%d", &n);

    int magicSquare[99][99] = {0};
    int currRow = 0; 
    int currCol = n / 2;
    int lastReplacedRow;
    int lastReplacedCol;

    for (int i = 1; i <= n * n; i++)
    {
        if (magicSquare[currRow][currCol] != 0)
        {
            currRow = lastReplacedRow + 1;
            currCol = lastReplacedCol;
        }

        magicSquare[currRow][currCol] = i;
        lastReplacedRow = currRow;
        lastReplacedCol = currCol;

        currRow--;
        currCol++;

        if (currRow < 0)
        {
            currRow = n - 1;
        }

        if (currCol > n - 1)
        {
            currCol = 0;
        }
   }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%-3d ", magicSquare[i][j]);
        }
        putchar('\n');
    }

    putchar('\n');

    return 0;
}
