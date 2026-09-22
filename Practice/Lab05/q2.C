#include <stdio.h>

int main()
{
    // Variable declaration
    int number;
    int numPositive, numNegative;
    numPositive = 0;
    numNegative = 0;

    // Taking the user input
    do 
    {
        printf("Enter an integer: ");
        scanf("%d", &number);

        // Counting the number of positive and negative numbers
        if (number > 0)
            numPositive++;
        else if (number < 0)
            numNegative++;
        
        printf("Number of +ve numbers: %d\n", numPositive);
        printf("Number of -ve numbers: %d\n", numNegative);
    } 
    while (number != 0); // Checking the exit condition

    return 0;
}   