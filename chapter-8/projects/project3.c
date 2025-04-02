#include <stdbool.h> /* C99 only */
#include <stdio.h>

/**
 * Modify the repdigit.c program of Section 8.1 so that the user can enter more than one number to be tested for repeated digits.
 * The program should terminate when the user enters a number that's less than or equal to 0.
 */

int main(void)
{
    bool digit_seen[10] = {false};
    int digit;
    long input;

    printf("Enter a number: ");
    scanf("%ld", &input);

    while (input >= 0)
    {
        long n = input;
        while (n > 0)
        {
            digit = n % 10;
            if (digit_seen[digit])
                break;
            digit_seen[digit] = true;
            n /= 10;
        }

        if (n > 0)
            printf("Repeated digit\n");
        else
            printf("No repeated digit\n");

        printf("Enter a new number: ");
        scanf("%ld", &input);
    }

    return 0;
}