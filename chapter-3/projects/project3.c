#include <stdio.h>

/**
 * Write a program that breaks down an ISBN entered by the user
 */

int main(void)
{
    int prefix, groupID, publisherCode, itemNumber, checkDigit;
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &prefix, &groupID, &publisherCode, &itemNumber, &checkDigit);

    printf("GS1 prefix: %d\n", prefix);
    printf("Group identifier: %d\n", groupID);
    printf("Publisher code: %d\n", publisherCode);
    printf("Item number: %d\n", itemNumber);
    printf("Check digit: %d\n", checkDigit);
    
    return 0;
}