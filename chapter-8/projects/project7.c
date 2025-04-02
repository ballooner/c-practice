#include <stdio.h>

/**
 * Write a program that reads a 5x5 array of integers and then prints the row sums and column sums.
 */

int main(void)
{
    int rowTotals[5] = {0};
    int colTotals[5] = {0};

    int currNum;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter row %d: ", i + 1);

        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &currNum);

            rowTotals[i] += currNum;
            colTotals[j] += currNum;
        }
    }

    printf("Row totals: ");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", rowTotals[i]);
    }

    printf("\n");

    printf("Col totals: ");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", colTotals[i]);
    }

    printf("\n");
}