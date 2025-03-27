#include <stdio.h>

/**
 * Translate the program fragment of Exercise 2 into a single for statement.
 */

int main(void)
{
    for (int i = 9384; i > 0; i /= 10)
    {
        printf("%d ", i);
    }

    return 0;
}