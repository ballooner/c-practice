#include <stdio.h>

/**
 * Write a program that asks the user to enter two integers, then calculates and displays their greatest common divisor.
 */

 int main(void)
 {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    int remainder;

    while (num1 % num2 > 0)
    {
        remainder = num1 % num2;
        num1 = num2;
        num2 = remainder;
    }

    printf("The GCF is: %d\n", num2);
 }