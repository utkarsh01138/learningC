#include <stdio.h>

int main()
{
    // Variable declaration
    int roll1, roll2, roll3, roll4, roll5;
    int marks1_1, marks1_2, marks1_3, marks1_4, marks1_5;
    int marks2_1, marks2_2, marks2_3, marks2_4, marks2_5;
    int marks3_1, marks3_2, marks3_3, marks3_4, marks3_5;
    int marks4_1, marks4_2, marks4_3, marks4_4, marks4_5;
    int marks5_1, marks5_2, marks5_3, marks5_4, marks5_5;
    float avg1, avg2, avg3, avg4, avg5;

    // User Input

    // 1st User Input
    printf("Please enter your roll number: ");
    scanf("%d", &roll1);
    printf("Please enter marks of 1st subject: ");
    scanf("%d", &marks1_1);
    printf("Please enter marks of 2nd subject: ");
    scanf("%d", &marks1_2);
    printf("Please enter marks of 3rd subject: ");
    scanf("%d", &marks1_3);
    printf("Please enter marks of 4th subject: ");
    scanf("%d", &marks1_4);
    printf("Please enter marks of 5th subject: ");
    scanf("%d", &marks1_5);
    printf("============\n");    

    // 2nd User Input
    printf("Please enter your roll number: ");
    scanf("%d", &roll2);
    printf("Please enter marks of 1st subject: ");
    scanf("%d", &marks2_1);
    printf("Please enter marks of 2nd subject: ");
    scanf("%d", &marks2_2);
    printf("Please enter marks of 3rd subject: ");
    scanf("%d", &marks2_3);
    printf("Please enter marks of 4th subject: ");
    scanf("%d", &marks2_4);
    printf("Please enter marks of 5th subject: ");
    scanf("%d", &marks2_5);
    printf("============\n");    

    // 3rd User Input
    printf("Please enter your roll number: ");
    scanf("%d", &roll3);
    printf("Please enter marks of 1st subject: ");
    scanf("%d", &marks3_1);
    printf("Please enter marks of 2nd subject: ");
    scanf("%d", &marks3_2);
    printf("Please enter marks of 3rd subject: ");
    scanf("%d", &marks3_3);
    printf("Please enter marks of 4th subject: ");
    scanf("%d", &marks3_4);
    printf("Please enter marks of 5th subject: ");
    scanf("%d", &marks3_5);
    printf("============\n");    

    // 4th User Input
    printf("Please enter your roll number: ");
    scanf("%d", &roll4);
    printf("Please enter marks of 1st subject: ");
    scanf("%d", &marks4_1);
    printf("Please enter marks of 2nd subject: ");
    scanf("%d", &marks4_2);
    printf("Please enter marks of 3rd subject: ");
    scanf("%d", &marks4_3);
    printf("Please enter marks of 4th subject: ");
    scanf("%d", &marks4_4);
    printf("Please enter marks of 5th subject: ");
    scanf("%d", &marks4_5);
    printf("============\n");    

    // 5th User Input
    printf("Please enter your roll number: ");
    scanf("%d", &roll5);
    printf("Please enter marks of 1st subject: ");
    scanf("%d", &marks5_1);
    printf("Please enter marks of 2nd subject: ");
    scanf("%d", &marks5_2);
    printf("Please enter marks of 3rd subject: ");
    scanf("%d", &marks5_3);
    printf("Please enter marks of 4th subject: ");
    scanf("%d", &marks5_4);
    printf("Please enter marks of 5th subject: ");
    scanf("%d", &marks5_5);
    printf("============\n");    

    // Average Computation
    avg1 = (marks1_1 + marks1_2 + marks1_3 + marks1_4 + marks1_5)/5;
    avg2 = (marks2_1 + marks2_2 + marks2_3 + marks2_4 + marks2_5)/5;
    avg3 = (marks3_1 + marks3_2 + marks3_3 + marks3_4 + marks3_5)/5;
    avg4 = (marks4_1 + marks4_2 + marks4_3 + marks4_4 + marks4_5)/5;
    avg5 = (marks5_1 + marks5_2 + marks5_3 + marks5_4 + marks5_5)/5;

    // Output
    printf("Roll: %4d; Marks: %3d, %3d, %3d, %3d, %3d; Average: %3.2f. \n", roll1, marks1_1, marks1_2, marks1_3, marks1_4, marks1_5, avg1);\
    printf("Roll: %4d; Marks: %3d, %3d, %3d, %3d, %3d; Average: %3.2f. \n", roll2, marks2_1, marks2_2, marks2_3, marks2_4, marks2_5, avg2);\
    printf("Roll: %4d; Marks: %3d, %3d, %3d, %3d, %3d; Average: %3.2f. \n", roll3, marks3_1, marks3_2, marks3_3, marks3_4, marks3_5, avg3);\
    printf("Roll: %4d; Marks: %3d, %3d, %3d, %3d, %3d; Average: %3.2f. \n", roll4, marks4_1, marks4_2, marks4_3, marks4_4, marks4_5, avg4);\
    printf("Roll: %4d; Marks: %3d, %3d, %3d, %3d, %3d; Average: %3.2f. \n", roll5, marks5_1, marks5_2, marks5_3, marks5_4, marks5_5, avg5);\
    
}