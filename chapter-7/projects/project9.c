#include <stdio.h>
#include <ctype.h>

/**
 * Write a program that asks the user for a 12-hour time, then displays the time in 24-hour form.
 */

int main(void)
{
    int hour, minute;
    printf("Enter a 12-hour time: ");
    scanf("%d:%d", &hour, &minute);

    char meridiem;
    while((meridiem = getchar()) == ' ');

    if (toupper(meridiem) == 'P' && hour != 12)
    {
       hour += 12;
    }

    printf("24-hour time: %d:%d\n", hour, minute);

    return 0;
}