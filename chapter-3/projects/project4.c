#include <stdio.h>

/**
 * Write a program that prompts the user to enter a telephone number in the form (xxx) xxx-xxxx and then displays the number
 * in the form xxx.xxx.xxxx
 */

int main(void)
{
    int areaCode, numberGroup1, numberGroup2;
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &areaCode, &numberGroup1, &numberGroup2);

    printf("You entered: %d.%d.%d\n", areaCode, numberGroup1, numberGroup2);
    
    return 0;
}