#include <stdio.h>

/**
 * Modify Project 11 so it continues adding terms until the current term becomes less than epsilon, where epsilon is a small floating-point number entered by the user.
 */

int main(void)
{
    float epsilon;
    printf("How small do you want the final term to be? ");
    scanf("%f", &epsilon);

    float e = 1;
    int iterator = 1;
    int factorialNum;

    while (1)
    {
        int factorialNum = iterator;

        for (int j = iterator - 1; j > 0; j--)
        {
            factorialNum *= j;
        }

        e += 1.0f/factorialNum;

        if (1.0f/factorialNum < epsilon)
            break;
        iterator++;
    }


    printf("e is approximated at: %f\n", e);

    return 0;
}