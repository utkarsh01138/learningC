#include <stdio.h>

int main()
{
    // Variable Declaration
    // User-input data
    unsigned int studentID;
    int messAttendence;
    int dailyBrekkieCost, dailyLunchCost, dailyDinnerCost;
    int monthlyMessCharge;
    float gstPercent;

    // Computed data
    int monthlyBrekkieCost, monthlyLunchCost, monthlyDinnerCost; 
    int monthlyMealCost, monthlyTotalCost;
    float gstAmount, avgCostPerMeal, avgDailyCost; 

    // User Input
    printf("Student ID: ");
    scanf("%d", &studentID);
    printf("Days Attended: ");
    scanf("%d", &messAttendence);
    printf("Cost per Breakfast: ");
    scanf("%d", &dailyBrekkieCost);
    printf("Cost per Lunch: ");
    scanf("%d", &dailyLunchCost);
    printf("Cost per Dinner: ");
    scanf("%d", &dailyDinnerCost);
    printf("Monthly Mess Maintenance Charge: ");
    scanf("%d", &monthlyMessCharge);
    printf("GST %: ");
    scanf("%f", &gstPercent);

    // Computations
    monthlyBrekkieCost = messAttendence * dailyBrekkieCost;
    monthlyLunchCost = messAttendence * dailyLunchCost;
    monthlyDinnerCost = messAttendence * dailyDinnerCost;
    monthlyMealCost = monthlyBrekkieCost + monthlyLunchCost + monthlyDinnerCost;
    gstAmount = (monthlyMealCost+monthlyMessCharge) * gstPercent;

    monthlyTotalCost = monthlyMealCost + monthlyMessCharge + gstAmount;

    avgDailyCost = monthlyTotalCost/messAttendence;
    avgCostPerMeal = avgDailyCost / 3;

    // Ouptut
    printf("=============\n");
    printf("Student ID: %d\n", studentID);
    printf("Days Attended: %d\n", messAttendence);
    printf("Breakfast Cost: %d\n", monthlyBrekkieCost);
    printf("Lunch Cost: %d\n", monthlyLunchCost);
    printf("Dinner Cost: %d\n", monthlyDinnerCost);
    printf("Food Cost: %d\n", monthlyMealCost);
    printf("Maintenance Charge: %d\n", monthlyMessCharge);
    printf("GST: %0.1f\n", gstAmount);
    printf("Final Bill: %0.1f\n", (monthlyMealCost + monthlyMessCharge + gstAmount));
    printf("Average/Day: %0.1f\n", avgDailyCost);
    printf("Average/Meal: %0.1f\n", avgCostPerMeal);

}