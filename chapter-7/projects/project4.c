#include <stdio.h>

/**
 * Write a program that translates an alphabetic phone number into numeric form
 */

int main(void)
{
    printf("Enter a phone number: ");

    char ch = getchar();
    while (ch != 10)
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

        printf("%c", ch);
        ch = getchar();
    }

    printf("\n");

    return 0;
}