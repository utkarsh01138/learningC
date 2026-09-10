#include <stdio.h>

int main()
{
    int abcissa, ordinate;

    // User Input
    printf("Please enter abcissa: ");
    scanf("%d", &abcissa);
    printf("Please enter ordinate: ");
    scanf("%d", &ordinate);

    // Axis Checks
    if ((abcissa == 0) && (ordinate == 0)) // Checking once for the origin
        printf("Point lies on/is the origin. ");
    else if (abcissa == 0)
        printf("Point lies on Y-Axis. ");
    else if (ordinate == 0)
        printf("Point lies on X-Axis. ");
    else // The Quadrant checker is only reached if the point doesn't lie on any axis. 
    {
        if (abcissa > 0) // I.e. x > 0 => Upper half
        {
            if (ordinate > 0) // I.e. y > 0 => Right Half
                printf("Point is in Quadrant I. ");
            else
                printf("Point is in Quadrant IV. ");
        }
        else
        {
            if (ordinate > 0)
                printf("Point is in Quadrant II. ");
            else    
                printf("Point is in Quadrant III. ");
        }
    }
}