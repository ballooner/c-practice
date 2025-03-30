#include <stdio.h>

/**
 * Modify Project 6 from Chapter 3 so the user may add, subtract, multiply or divide two fractions. (By entering +, -, * or / between them)
 */

 int main(void)
 {
     int num1, denom1, num2, denom2, result_num, result_denom;
     char operationType;
 
     printf("Enter fractions: ");
     scanf("%d / %d", &num1, &denom1);
     operationType = getchar();
     scanf("%d / %d", &num2, &denom2);
     
     if (operationType == '/')
     {
        result_num = num1 * denom2 + num2 * denom1;
        result_denom = denom1 * denom2;
     } else if (operationType == '*')
     {
        result_num = num1 * num2;
        result_denom = denom1 * denom2;
     } else if (operationType == '+')
     {
        result_num = num1 * denom2 + num2 * denom1;
        result_denom = denom1 * denom2;
     } else if (operationType == '-')
     {
        result_num = num1 * denom2 - num2 * denom1;
        result_denom = denom1 * denom2;
     }
 
     printf("The sum is %d/%d\n", result_num, result_denom);
 
     return 0;
 }