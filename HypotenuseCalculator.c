#include <stdio.h>
#include <math.h>

int main(void)
{   //Create 3 variables for each side of a triangle
    double A;
    double B;
    double C;

    printf("\nEnter side A: ");
    scanf("%lf", &A);   //Prompt user input side A

    printf("\nEnter side B: ");
    scanf("%lf", &B);   //Prompt user input side B

    C = sqrt(A*A + B*B);    //Calculate C and print the result
    printf("Side C: %lf", C);

    return 0;
}