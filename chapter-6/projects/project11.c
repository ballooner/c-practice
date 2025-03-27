#include <stdio.h>

/**
 * The value of the math constant e can be expressed as an infinite series: e = 1 + 1/1! + 1/2! + ...
 * Write a program that approximates e by computing series to n.
 */

 int main(void)
 {
     int n;
     printf("How many times to compute? ");
     scanf("%d", &n);
 
     float e = 1;
 
     for (int i = 1; i < n; i++)
     {
         int factorialNum = i;
 
         for (int j = i - 1; j > 0; j--)
         {
             factorialNum *= j;
         }
 
         e += 1.0f/factorialNum;
     }
 
     printf("e is approximated at: %f\n", e);
 
     return 0;
 }