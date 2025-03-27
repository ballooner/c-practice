#include <stdio.h>

/**
 * Translate the program fragment of Exercise 1 into a single for statement
 */

int main(void) 
{
    for (int i = 1; i <= 128; i *= 2)
    {
        printf("%d ", i);
    }

    return 0;
}