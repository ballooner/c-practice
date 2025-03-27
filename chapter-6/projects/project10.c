#include <stdio.h>

/**
 * Generalize Chapter 5 Project 9 so you can enter any number of dates and the program will tell you what one is the earliest.
 * Input should stop when 0/0/0 is entered.
 */

int main(void)
{
    int inputMonth = -1, inputDay = -1, inputYear = -1;
    int earliestMonth, earliestDay, earliestYear;

    printf("Enter a date: ");
    scanf("%d/%d/%d", &earliestMonth, &earliestDay, &earliestYear);

    while (inputMonth != 0)
    {
        printf("Enter a date: ");
        scanf("%d/%d/%d", &inputMonth, &inputDay, &inputYear);

        if (inputMonth == 0)
            continue;

        if (inputYear == earliestYear && inputMonth == earliestMonth && inputDay < earliestDay)
        {
            earliestMonth = inputMonth;
            earliestDay = inputDay;
            earliestYear = inputYear;
        } else if (inputYear == earliestYear && inputMonth < earliestMonth)
        {
            earliestMonth = inputMonth;
            earliestDay = inputDay;
            earliestYear = inputYear;
        } else if (inputYear < earliestYear)
        {
            earliestMonth = inputMonth;
            earliestDay = inputDay;
            earliestYear = inputYear;
        }
    }

    printf("%d/%.2d/%.2d is the earliest date\n", earliestMonth, earliestDay, earliestYear);

    return 0;
}