#include <stdio.h>

int main()
{
    // Variable declaration
    int number; 
    int numOfDigits = 0;

    // Taking user input
    printf("Enter a number: ");
    scanf("%d", &number);

    // Counting number of digits
    while (number != 0)
    {
        number /= 10;
        numOfDigits++;
    }

    // Output
    printf("Number of digits: %d\n", numOfDigits);
    
}