#include <stdio.h>

/**
 * Write a program that accepts a date from the user in the form mm/dd/yyyy adn then displays it in the form yyymmdd
 */

int main(void)
{
    int month, day, year;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("You entered the date: %.4d%.2d%.2d\n", year, month, day);

    return 0;
}