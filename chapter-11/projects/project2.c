#include <stdio.h>

/**
 * Give a 24-hour format time, provide the closest departure 
 * time along with the arrival time of that flight.
 *
 * Modify Project 8 from Chapter 5 so that it includes the following function:
 * void find_closest_flight(int desired_time,
 *                          int *departure_time, 
 *                          int *arrival_time);
 */

void find_closest_flight(int desired_time,
                         int *departure_time,
                         int *arrival_time);

int main(void)
{
    int hour, minute;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);
    int desired_time = hour * 60 + minute;

    int departure_time;
    int arrival_time;

    find_closest_flight(desired_time, &departure_time, &arrival_time);

    printf("Closest departure time: %d\n", departure_time);
    printf("Arrival time: %d\n", arrival_time);

    return 0;
}

void find_closest_flight(int desired_time,
                         int *departure_time,
                         int *arrival_time)
{

    int time1 = 8 * 60;
    int time2 = 9 * 60 + 43;
    int time3 = 11 * 60 + 19;
    int time4 = 12 * 60 + 47;
    int time5 = 14 * 60;
    int time6 = 15 * 60 + 45;
    int time7 = 19 * 60;
    int time8 = 21 * 60 + 45;

    if (desired_time - time1 <= 0)
    {
        *departure_time = time1;
        *arrival_time = 10 * 60 + 16;
    } else if (desired_time - time2 <= 0)
    {
        *departure_time = time2;
        *arrival_time = 11 * 60 + 52;
    }
    else if (desired_time - time3 <= 0)
    {
        *departure_time = time3;
        *arrival_time = 13 * 60 + 31;
    }else if (desired_time - time4 <= 0)
    {
        *departure_time = time4;
        *arrival_time = 15 * 60;
    }else if (desired_time - time5 <= 0)
    {
        *departure_time = time5;
        *arrival_time = 16 * 60 + 8;
    }else if (desired_time - time6 <= 0)
    {
        *departure_time = time6;
        *arrival_time = 17 * 60 + 55;
    }else if (desired_time - time7 <= 0)
    {
        *departure_time = time7;
        *arrival_time = 21 * 60 + 20;
    }else if (desired_time - time8 <= 0)
    {
        *departure_time = time8;
        *arrival_time = 23 * 60 + 58;
    }
}
