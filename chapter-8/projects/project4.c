#include <stdio.h>

/**
 * Modify the reverse.c program of Section 8.1 to use the expression (int) (sizeof(a) / sizeof(a[0])) (or a macro with this value) for the array length;
 */

#define N 10

int main(void)
{
    int a[N], i;

    printf("Enter %d numbers: ", N);
    for (i = 0; i < (sizeof(a) / sizeof(a[0])); i++)
        scanf("%d", &a[i]);

    printf("In reverse order:");
    for (i = (sizeof(a) / sizeof(a[0])) - 1; i >= 0; i--)
        printf(" %d", a[i]);
    printf("\n");

    return 0;
}