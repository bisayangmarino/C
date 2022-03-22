#include <stdio.h>

int main(void)
{   //Create variables
    char operator;
    double num1;
    double num2;
    double answer;

    //Prompt user input for operator
    printf("\nEnter an operator (+ - * /): ");
    scanf("%c", &operator);

    //Check operator validity
    if (operator == '+' || operator == '-' || operator == '*' || operator == '/' 
    )
    {   //If operator is valid, ask for user input
        printf("Enter number 1: ");
        scanf("%lf", &num1);

        printf("Enter number 2: ");
        scanf("%lf", &num2);

        //Calculate according to operator
        switch (operator)
        {
            case '+':
            answer = num1 + num2;
            printf("\nAnswer: %.2lf", answer);
            break;
            case '-':
            answer = num1 - num2;
            printf("\nAnswer: %.2lf", answer);
            break;
            case '*':
            answer = num1 * num2;
            printf("\nAnswer: %.2lf", answer);
            break;
            case '/':
            answer = num1 / num2;
            printf("\nAnswer: %.2lf", answer);
            break;
        }
    }
    else    
    {
        printf("\n%c is not a valid operator", operator);
    }
    return 0;
}