#include <stdio.h>

int isPrime(int);
int mersenneForm(int);
int pow(int, int);

int isPrime(int N)
{
    if (N <= 1)
        return 0; // Not Prime

    for (int i = 2; i*i <= N; i++)
    {
        if (N%i == 0)
            return 0; // Not Prime
    }

    return 1; // Is prime
}

int mersenneForm(int k)
{
    int value = pow(2, k) - 1;
    return value;
}

int pow(int base, int exponent)
{
    int result = 1;
    for (int i = 0; i < exponent; i++)
        result *= base;
    return result;
}

int main()
{
    // Variable devclaration
    int limit;
    printf("Enter higher bound: ");
    scanf("%d", &limit);

    for (int i = 0; mersenneForm(i) <= limit; i++) 
    {
        int mersenneNum = mersenneForm(i);
        if (isPrime(mersenneNum))
            printf("%d ", mersenneNum);
    }


    return 0;
}