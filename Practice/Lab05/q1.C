#include <stdio.h>

int main()
{
    // Variable declaration
    int numberOfPatients;
    int patientAges[numberOfPatients];

    // Taking patient's age inputs
    for (int i = 0; i < numberOfPatients; i++)
    {
        printf("Enter age of patient %d: ", i + 1);
        scanf("%d", &patientAges[i]);
    }

    

    return 0;
}