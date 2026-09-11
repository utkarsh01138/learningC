#include <stdio.h>

int main()
{
    char name[50];
    printf("Enter name: ");
    scanf("%s", &name);

    /*
    for (int i = 0; i < 50; i++)
        printf("%c", name   [i]);

    */
   printf("%s", name);
}