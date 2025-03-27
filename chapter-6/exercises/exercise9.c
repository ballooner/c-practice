#include <stdio.h>

/**
 * Translate the for statement of Exercise 8 into an equivalent while statement.
 * You will need one statement in addition to the while loop itself.
 */

int main(void)
{
    int i = 10;

    while (i >= 1)
    {
        printf("%d ", i++);

        i /=2;
    }

    return 0;
}