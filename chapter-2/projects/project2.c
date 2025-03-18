#include <stdio.h>

/**
 * Project 2:
 * Write a program that computes the volume of a sphere with a 10-meter radius.
 */

int main(void)
{
    int radius = 10;
    float sphereVolume = (4.0f/3.0f) * 3.14 * radius * radius * radius;

    printf("The volume of a sphere with a 10-meter radius is: %f\n", sphereVolume);

    return 0;
}