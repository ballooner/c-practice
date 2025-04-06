#include <stdio.h>

/**
 * Modify Project 4 from Chapter 7 so the program labels its output.
 * The program will need to store the number in an array of characters.
 * You may assume the number is no longer than 15 characters.
 */

int main(void)
{
    char phoneNumberInput[15];

    printf("Enter phone number: ");

    char ch = getchar();
    int iterator = 0;

    while(ch != 10)
    {
        switch (ch)
        {
            case 65: case 66: case 67:
                ch = '2';
                break;
            case 68: case 69: case 70:
                ch = '3';
                break;
            case 71: case 72: case 73:
                ch = '4';
                break;
            case 74: case 75: case 76:
                ch = '5';
                break;
            case 77: case 78: case 79:
                ch = '6';
                break;
            case 80: case 81: case 82:
                ch = '7';
                break;
            case 83: case 84: case 85:
                ch = '8';
                break;
            case 86: case 87: case 88:
                ch = '9';
                break;
        }

        phoneNumberInput[iterator] = ch;

        ch = getchar();
        iterator++;
    }

    printf("In numeric form: ");

    for (int i = 0; i < 15; i++)
    {
        putchar(phoneNumberInput[i]);
    }

    putchar('\n');

    return 0;
}
