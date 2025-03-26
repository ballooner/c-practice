#include <stdio.h>

/**
 * Write a program that asks the user for a 24-hour time, then displays the  time in 12-hour form.
 */

int main(void)
{
    int hour, minute;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    if (hour != 12)
    {
        hour %= 12;
    }

    printf("Equivalent 12-hour time: %.2d:%.2d\n", hour, minute);
    
    return 0;
}