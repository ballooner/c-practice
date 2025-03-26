#include <stdio.h>

/**
 * Write a switch statement whose controlling expression is the variable area_code.
 * If the area code is on the table, the switch statement will print the corresponding city name.
 * Otherewise, the switch statement will display the messaage "Area code not recognized".
 */

int main(void)
{
    int area_code;
    printf("Enter an area code: ");
    scanf("%d", &area_code);

    switch (area_code)
    {
        case 229:
            printf("Albany\n");
            break;
        case 404: case 470: case 678: case 770:
            printf("Atlanta\n");
            break;
        case 478:
            printf("Macon\n");
            break;
        case 706: case 762:
            printf("Macon\n");
            break;
        case 912:
            printf("Savannah\n");
            break;
        default:
            printf("Area code not recognized\n");
    }
}