#include <stdio.h>

/**
 * Modift the upc.c program so it calculates teh check digit for an EAN
 */

int main(void) 
{
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, j6;

    printf("Enter the first 12 digits of a EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5, &j6);

    int first_sum = i1 + i3 + i5 + j2 + j4 + j6;
    int second_sum = d + i2 + i4 + j1 + j3 + j5;
    int total = 3 * first_sum + second_sum;

    printf("Check digit: %d\n", 9 - ((total - 1) % 10));

    return 0;
}