#include <stdio.h>

/**
 * Modify the upc.c program of Section 4.1 so that it checks whether a UPC is valid.
 * After the usuer enters a UPC, the program will display either VALID or NOT VALID.
 */

int main(void) 
{
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, cd;

    printf("Enter a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5, &cd);

    int first_sum = d + i2 + i4 + j1 + j3 + j5;
    int second_sum = i1 + i3 + i5 + j2 + j4;
    int total = 3 * first_sum + second_sum;
    int checkDigit = 9 - ((total -1) % 10);

    if (checkDigit == cd)
        printf("VALID\n");
    else
        printf("NOT VALID\n");

    return 0;
}