#include <stdio.h>

/**
 * Modify the square2.c program of Section 6.3 so that it pauses every 24 squares and displays the following message: Press Enter to continue
 * After displaying the messge, the program should use getchar to read a character. 
 * getchar won't allow the program to continue until the user presses the enter key.
 */

int main(void)
{
    int n;

    printf("This program prints a table of squres.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    getchar();

    for (int i = 1; i <= n; i++)
    {
        printf("%10d%10d\n", i, i * i);

        if (i % 24 == 0)
        {
            printf("Press Enter to continue...\n");

            char ch;

            do
            {
                ch = getchar();
            } while (ch != 10);
        }
    }

    return 0;
}