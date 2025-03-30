#include <stdio.h>

/**
 * Wirte a program that evaluates an expression. The operands in the expressions are floating point.
 */

int main(void)
{
    float firstNum, secondNum;
    char operation;

    printf("Enter an expression: ");
    scanf("%f %c", &firstNum, &operation);

    while (operation != 10)
    {
        scanf("%f", &secondNum);

        switch (operation)
        {
            case '*':
                firstNum *= secondNum;
                break;
            case '/':
                firstNum /= secondNum;
                break;
            case '+':
                firstNum += secondNum;
                break;
            case '-':
                firstNum -= secondNum;
                break;
        }

        operation = getchar();
    }

    printf("Value of expression: %f\n", firstNum);

    return 0;
}