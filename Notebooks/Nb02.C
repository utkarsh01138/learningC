#include <stdio.h>
int main()
{
    int n;
    for (n = 1; n < 5; n++)
    {
        if (n ==3 )
        {
            n++;
            // ____________________ Blank
            continue;
            
        }
        printf("%d, ", n*2);
    }
}

