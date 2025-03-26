#include <stdio.h>

/**
 * Write a program that prompts teh user to enter two dates and then indicates which date comes earlier on the calendar.
 */

int main(void)
{
    int date1Month, date1Day, date1Year;
    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &date1Month, &date1Day, &date1Year);

    int date2Month, date2Day, date2Year;
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &date2Month, &date2Day, &date2Year);

    

    if (date1Year - date2Year < 0)
    {
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", date1Month, date1Day, date1Year, date2Month, date2Day, date2Year);
    } else if (date1Year - date2Year > 0)
    {
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", date2Month, date2Day, date2Year, date1Month, date1Day, date1Year);
    } else if (date1Month - date2Month < 0)
    {
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", date1Month, date1Day, date1Year, date2Month, date2Day, date2Year);
    } else if (date1Month - date2Month > 0)
    {
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", date2Month, date2Day, date2Year, date1Month, date1Day, date1Year);
    } else if (date1Day - date2Day < 0)
    {
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", date1Month, date1Day, date1Year, date2Month, date2Day, date2Year);
    } else if (date1Day - date2Day > 0)
    {
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", date2Month, date2Day, date2Year, date1Month, date1Day, date1Year);
    } else 
    {
        printf("It is the same date!\n");
    }

    return 0;
}