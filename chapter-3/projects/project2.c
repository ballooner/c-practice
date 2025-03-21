#include <stdio.h>

/**
 * Write a program that formats product information entered by the user.
 * The item number and date should be left justified; the unit price should be right justified. Allow dollar amounts up to $9999.99.
 * Hint: Use tabs to line up the columns.
 */

int main(void)
{
    int item;
    printf("Enter item number: ");
    scanf("%d", &item);

    float price;
    printf("Enter unit price: ");
    scanf("%f", &price);

    int month, day, year;
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%d\t\t$%7.2f\t%d/%d/%d\n", item, price, month, day, year);

    return 0;
}