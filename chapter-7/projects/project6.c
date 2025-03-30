#include <stdio.h>

/**
 * Write a program that prints the values of sizeof() on int, short, long, float, double and long double.
 */

int main(void)
{
    printf("Byte sizes of -\n");
    printf("Int: %d\n", sizeof((int) 5));
    printf("Short: %d\n", sizeof((short) 5));
    printf("Long: %d\n", sizeof((long) 5));
    printf("Float: %d\n", sizeof((float) 5));
    printf("Double: %d\n", sizeof((double) 5));
    printf("Long Double: %d\n", sizeof((long double) 5));

    return 0;
}