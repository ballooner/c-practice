#include <stdio.h>

/**
 * Modify Project 11 from Chapter 7 so the program labels its output.
 */

int main(void)
{
    printf("Enter a first and last name: ");
    char firstInitial = getchar();
    char lastName[20];

    while(getchar() != ' ');

    int iterator = 0;
    char currChar = getchar();
    while (currChar != 10)
    {
        lastName[iterator++] = currChar;

        currChar = getchar();
    }

    printf("You entered the name: ");

    for(int i = 0; i < iterator; i++)
    {
        putchar(lastName[i]);
    }

    printf(", %c.\n", firstInitial);

    return 0;
}
