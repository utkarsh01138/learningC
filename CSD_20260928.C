#include <stdio.h>

int main()
{
    int i = 0;
    int j = 0;

    while (i < 5, i < 20)
    {
        i++; j++;
    }

    printf("i = %d, j = %d\n", i, j);
    return 0;
}