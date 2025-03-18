#include <stdio.h>

/**
 * Project 3:
 * Modify project 2 that it prompts the user to enter the radius of the sphere.
 */

int main(void)
{
    int radius;
    printf("Sphere radius: ");
    scanf("%d", &radius);

    float sphereVolume = (4.0f/3.0f) * 3.14 * radius * radius * radius;

    printf("The volume of a sphere with a 10-meter radius is: %f\n", sphereVolume);

    return 0;
}