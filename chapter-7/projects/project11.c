#include <stdio.h>

/**
 * Write a program that takes a first name and last name enetered by the user and displays the last name, a comma and the first initial, followed by a period.
 */

int main(void)
{
    printf("Enter a first and last name: ");

    // Get first initial    
    char firstInitial = ' ';
    scanf(" %c", &firstInitial);

    // Clear all lower-case letters and spaces
    while (getchar() != ' ');

    //Get last name
    char currentChar = getchar();
    while (currentChar != 10)
    {
        printf("%c", currentChar);
        currentChar = getchar();
    }

    printf(", %c.\n", firstInitial);

    return 0;
}