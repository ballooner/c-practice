#include <stdio.h>

/**
 * Write a program that asks the user to enter a series of integers
 * (stored in an array), then sort the integers by calling
 * selection_sort. When given an array with n elements,
 * selection_sort must do the following:
 * 1. Search the array to find the largest element, then move it 
 *    to the last position in the array.
 * 2. Call itself recursively to sort the first n - 1 elements of the array.
 */

#define MAX_LEN 100

void selection_sort(int array[], int arrayLength);

int main(void)
{
    int numArray[MAX_LEN];
    int numInputs = 0;
    char c;

    printf("Enter integers: ");
    for (int i = 0; i < MAX_LEN; i++)
    {
        scanf(" %d", &numArray[i]);
        numInputs++;

        if ((c = getchar()) == '\n')
        {
            break;
        }

        ungetc(c, stdin);
    }

    selection_sort(numArray, numInputs);

    printf("\nSorted array: ");
    for (int i = 0; i < numInputs; i++)
    {
        printf("%d ", numArray[i]);
    }
    putchar('\n');

    return 0;
}

void selection_sort(int array[], int  arrayLength)
{
    if (arrayLength == 1)
    {
        return;
    } else 
    {
        int largestNum = array[0];

        for (int i = 1; i < arrayLength; i++)
        {
            if (array[i - 1] > array[i])
            {
                int temp = array[i];
                array[i] = array[i - 1];
                array[i - 1] = temp;
            }
        }

        selection_sort(array, arrayLength - 1);
    }
}
