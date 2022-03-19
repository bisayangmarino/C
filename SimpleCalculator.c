#include <stdio.h>

int main(void)
{   //Create variables
    char operator;
    double num1;
    double num2;
    double answer;

    printf("\nEnter an operator (+ - * /): ");
    scanf("%c", &operator); //Prompt user input for operator
    //Check if operator is valid
    if (operator == '+' || operator == '-' || operator == '*' || operator == '/' 
    )
    {   //If operator is valid, ask for user input
        printf("Enter number 1: ");
        scanf("%lf", &num1);

        printf("Enter number 2: ");
        scanf("%lf", &num2);
        //Proceed calculating answer according to given operator
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
    {   //Inform user that operator is invalid
        printf("\n%c is not a valid operator", operator);
    }
    return 0;
}