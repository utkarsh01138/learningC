#include <stdio.h>

int main()
{
    // Variable Initialisation
    int a0, a1, a2, a3, a4, a5; // where an is the coefficient of x^n

    // User Input
    printf("Please enter coefficients of 5 degree polynomial: \n");
    printf("Enter coeff.(x^0): ");
    scanf("%d", &a0);
    printf("Enter coeff.(x^1): ");
    scanf("%d", &a1);
    printf("Enter coeff.(x^2): ");
    scanf("%d", &a2);
    printf("Enter coeff.(x^3): ");
    scanf("%d", &a3);
    printf("Enter coeff.(x^4): ");
    scanf("%d", &a4);
    printf("Enter coeff.(x^5): ");
    scanf("%d", &a5);
    
    // Output Section
    printf("Polynomial: %dx^5 + %dx^4 + %dx^3 + %dx^2 + %dx + %d\n", a5, a4, a3, a2, a1, a0);
    printf("Derivative: %dx^4 + %dx^3 + %dx^2 + %dx + %d", (a5*5), (a4*4), (a3*3), (a2*2), (a1*1));
    
    // printf("Polynomial: %2dx^5 + %2dx^4 + %dx^3 + %dx^2 + %dx + %d\n", a5, a4, a3, a2, a1, a0);
    // printf("Derivative: %2dx^4 + %2dx^3 + %dx^2 + %dx + %d", (a5*5), (a4*4), (a3*3), (a2*2), (a1*1));

}