#include <stdio.h>

int main()
{
    // Variable declaration
    int numberOfPatients;
    int patientAges[numberOfPatients];
    float ageAverage;
    int maxAge, minAge;

    // Taking number of patients input
    printf("Enter the number of patients: ");
    scanf("%d", &numberOfPatients);

    // Taking patient's age inputs
    for (int i = 0; i < numberOfPatients; i++)
    {
        printf("Enter age of patient %d: ", i + 1);
        scanf("%d", &patientAges[i]);
    }

    // Computing average, min, and max ages
    int sum = 0; 
    maxAge = patientAges[0];
    minAge = patientAges[0];
    for (int i = 0; i < numberOfPatients; i++)
    {
        sum += patientAges[i];
        if (patientAges[i] > maxAge)
            maxAge = patientAges[i];
        if (patientAges[i] < minAge)
            minAge = patientAges[i];
    }
    ageAverage = (float)sum / numberOfPatients;

    printf("Average age: %.2f \n", ageAverage);
    printf("Maximum age: %d \n", maxAge);
    printf("Minimum age: %d \n", minAge);

    return 0;
}