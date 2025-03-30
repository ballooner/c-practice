#include <stdio.h>
#include <ctype.h>

/**
 * Modify Programming Project 8 from Chapter 5 so that the user enters a time using the 12-hour clock
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
 
     int minutesSinceMidnight = hour * 60 + minute;
 
     int time1 = 8 * 60;
     int time2 = 9 * 60 + 43;
     int time3 = 11 * 60 + 19;
     int time4 = 12 * 60 + 47;
     int time5 = 14 * 60;
     int time6 = 15 * 60 + 45;
     int time7 = 19 * 60;
     int time8 = 21 * 60 + 45;
 
     printf("Closest departure time is ");
 
     if (minutesSinceMidnight - time1 <= 0)
     {
         printf("8:00 a.m., arriving at 10:16 a.m.\n");
     } else if (minutesSinceMidnight - time2 <= 0)
     {
         printf("9:43 a.m., arriving at 11:52 a.m.\n");
     }
     else if (minutesSinceMidnight - time3 <= 0)
     {
         printf("11:19 a.m., arriving at 1:31 p.m.\n");
     }else if (minutesSinceMidnight - time4 <= 0)
     {
         printf("12:47 p.m., arriving at 3:00 p.m.\n");
     }else if (minutesSinceMidnight - time5 <= 0)
     {
         printf("2:00 p.m., arriving at 4:08 p.m.\n");
     }else if (minutesSinceMidnight - time6 <= 0)
     {
         printf("3:45 p.m., arriving at 5:55 p.m.\n");
     }else if (minutesSinceMidnight - time7 <= 0)
     {
         printf("7:00 p.m., arriving at 9:20 p.m.\n");
     }else if (minutesSinceMidnight - time8 <= 0)
     {
         printf("9:45 p.m., arriving at 11:58 p.m.\n");
     }
 
     return 0;
 }