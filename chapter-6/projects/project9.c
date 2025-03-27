#include <stdio.h>

/**
 * Modify Project 8 from Chapter 2 so it asks for the number of payments and displays the balance remaining after each payment.
 */

 int main(void)
 {
     float loanAmount;
     printf("Enter amount of loan: ");
     scanf("%f", &loanAmount);
 
     float interestRate;
     printf("Enter interest rate: ");
     scanf("%f", &interestRate);
     interestRate /= (100 * 12);
 
     float monthlyPayment;
     printf("Enter monthly payment: ");
     scanf("%f", &monthlyPayment);

     int numPayments;
     printf("Enter the number of payments: ");
     scanf("%d", &numPayments);
 
     for (int i = 0; i < numPayments; i++)
     {
        loanAmount = (1 + interestRate) * loanAmount - monthlyPayment;
        printf("Balance remaining after %d payment: $%.2f\n", i, loanAmount);
     }
 
     return 0;
 }