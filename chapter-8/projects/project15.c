#include <stdio.h>

/**
 * Create a program to encrypt a message using a Caesar Cipher.
 */

int main(void)
{
    char message[80];
    printf("Enter message to be encrypted: ");

    char currChar = getchar();
    int iterator = 0;
    while (currChar != 10)
    {
        message[iterator++] = currChar;
        currChar = getchar();
    }

    int shiftAmount;
    printf("Enter shift amount: ");
    scanf("%d", &shiftAmount);

    printf("Encrypted message: ");
    for (int i = 0; i < iterator; i ++)
    {
        if (message[i] >= 'A' && message[i] <= 'Z')
        {
            putchar(((message[i] - 'A') + shiftAmount) % 26 + 'A');
        } else if (message[i] >= 'a' && message[i] <= 'z')
        {
            putchar(((message[i] - 'a') + shiftAmount) % 26 + 'a');
        } else
        {
            putchar(message[i]);
        }
    }

    putchar('\n');

    return 0;
}
