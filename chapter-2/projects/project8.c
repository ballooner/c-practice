#include <stdio.h>

/**
 * Project 8:
 * Write a program that calculates the remaining balance on a loan after the first, second and third monnthly payments.
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

    printf("%f  %f  %f", loanAmount, interestRate, monthlyPayment);

    loanAmount = (1 + interestRate) * loanAmount - monthlyPayment;
    printf("Balance remaining after first payment: $%.2f\n", loanAmount);
    loanAmount = (1 + interestRate) * loanAmount - monthlyPayment;
    printf("Balance remaining after second payment: $%.2f\n", loanAmount);
    loanAmount = (1 + interestRate) * loanAmount - monthlyPayment;
    printf("Balance remaining after third payment: $%.2f\n", loanAmount);

    return 0;
}