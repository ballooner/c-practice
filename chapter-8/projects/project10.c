#include <stdio.h>

/**
 * Modify Project 8 from Chapter 5 to store the departure times in an array,
 * and the arrival times in another array.
 * Use a loop to search through the departure time array and find 
 * the time closest to the one entered by the user.
 */

int main(void)
{
int hour, minute;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    int minutesSinceMidnight = hour * 60 + minute;

    int departureTimes[] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    int arrivalTimes[]   = {616, 712, 811, 900, 968, 1075, 1280, 1438};

    printf("Closest departure time is ");

    for (int i = 0; i < sizeof(departureTimes) / sizeof(departureTimes[0]); i++)
    {
        if (minutesSinceMidnight - departureTimes[i] <= 0)
        {
            printf("%d:%.2d arrival time: %d:%.2d\n", 
                    departureTimes[i] / 60, departureTimes[i] % 60,
                    arrivalTimes[i] / 60, arrivalTimes[i] % 60);
            break;
        }
    }

    return 0;
}
