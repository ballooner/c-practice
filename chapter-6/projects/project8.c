#include <stdio.h>

/**
 * Write a program that prints a one month calendar.
 * The user specifies the number of days in the month and the day of the week on which the month begins.
 */

int main(void)
{
    int numDays, startDay;
    printf("Enter number of days in month: ");
    scanf("%d", &numDays);

    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &startDay);

    for (int i = 1 - startDay; i <= numDays; i++)
    {
        if (i < 1)
        {
            printf("  ");
        } else if (startDay++ % 7 == 0)
        {
            printf("%2d\n", i);
        } else 
        {
            printf("%2d ", i);
        }
    }

    printf("\n");

    return 0;
}