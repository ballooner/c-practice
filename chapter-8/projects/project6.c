#include <stdio.h>
#include <ctype.h>

/**
 * Write a "B1FF filter" that reads a message entered by the user and translates it into B1FF-speak.
 */

int main(void)
{
    char c;
    char message[100] = {0};

    printf("Enter message: ");

    int index = 0;
    while ((c = getchar()) != '\n' && index < 100)
    {
        message[index++] = toupper(c);
    }

    printf("In B1FF-speak: ");

    for (int i = 0; i < 100; i++)
    {
        switch (message[i])
        {
            case 'A':
                putchar('4');
                break;
            case 'B':
                putchar('8');
                break;
            case 'E':
                putchar('3');
                break;
            case 'I':
                putchar('1');
                break;
            case 'O':
                putchar('0');
                break;
            case 'S':
                putchar('5');
                break;
            default:
                putchar(message[i]);
                break;
        }
    }

    printf("!!!!!!!!!\n");

    return 0;
}
