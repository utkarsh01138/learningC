#include <stdio.h>

int main()
{
    // Variable Declaration
    int marks;

    // User Input
    printf("Pleas enter grade: ");
    scanf("%d", &marks);
    printf("Grade: ");
    // printf((marks>=90) ? "EX" : ((marks>=80) ? "A" : "D"));
    // Note that ternary conditions cna be nested for a single line else-if ladder, this could be useful later. 

    // Checking Conditionals
    if (marks >= 90)
        printf("EX"); 
    else if (marks >= 80)
        printf("A");
    else if (marks >= 70)
        printf("B");
    else if (marks >= 60)
        printf("C");
    else if (marks >= 50)
        printf("D");
    else if (marks >= 35)
        printf("P");
    else if (marks >= 0)
        printf("F");
    else    
        printf("X\nError. Invalid Grade Inputted");
}