#include <stdio.h>

/**
 * Write a program that asks the user to enter a wind speed (in knots), then displays the coreesponding description on the Beaufort scale.
 */

int main(void)
{
    int windSpeed;
    printf("Enter a wind speed in knots: ");
    scanf("%d", &windSpeed);

    if (windSpeed < 1)
    {
        printf("Calm\n");
    } else if (windSpeed < 3)
    {
        printf("Light air\n");
    } else if (windSpeed < 27)
    {
        printf("Breeze\n");
    } else if (windSpeed < 63)
    {
        printf("Gale\n");
    } else
    {
        printf("Hurricane\n");
    }
    
    return 0;
}