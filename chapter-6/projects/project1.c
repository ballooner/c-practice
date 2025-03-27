#include <stdio.h>

/**
 * Write a program that find the largest in a series of numbers entered by the user.
 * The program must prompt the user to enter the numbers one by one.
 * When the user enters 0 or a negative number, the program must display the largest non-negative number entered.
 */

 int main(void)
 {
    float input = 0;
    float largestNumber = 0;

    do
    {
        largestNumber = input > largestNumber ? input : largestNumber;

        printf("Enter a number: ");
        scanf("%f", &input);
    } while (input > 0);

    printf("The largest number entered was %f\n", largestNumber);
 }