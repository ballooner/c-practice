#include <stdio.h>

/**
 * Using the switch statemnet write a program that converts a numberical grade into a letter grade
 * A = 90-100
 * B = 80 - 89
 * C = 70 - 79
 * D = 60 - 69
 */

int main(void)
{
    int numberGrade;
    printf("Enter numerical grade: ");
    scanf("%d", &numberGrade);

    numberGrade /= 10;
    char letterGrade;

    switch (numberGrade)
    {
        case 10: case 9:
            letterGrade = 'A';
            break;
        case 8:
            letterGrade = 'B';
            break;
        case 7: 
            letterGrade = 'C';
            break;
        case 6:
            letterGrade = 'D';
            break;
        default:
            letterGrade = 'F';
    }

    printf("Letter grade: %c\n", letterGrade);

    return 0;
}