#include <stdio.h>

int main()
{
    // Variable Declarations
    int choice; 
    char studentName[50];
    unsigned int studentID;
    char bookID[20];
    char bookTitle[100];
    int daysIssued, daysKept, daysOverdue;
    int dailyFine, membershipFee, dailyCharge;
    int numBooksIssued, chargePerBook, issueAmount;

    // Default Values
    dailyFine = 7;
    dailyCharge = 5;
    membershipFee = 3;
    chargePerBook = 10;
    numBooksIssued = 10;

    printf("1. Issue Book. \n");
    printf("2. Return Book. \n");
    printf("3. Calculate Fine. \n");
    printf("4. Display Library Charges. \n");
    printf("5. Exit. \n");
    printf("Please enter a number: ");
    scanf("%d", &choice);

    // Switch-Case Menu
    switch (choice)
    {
        case 1: 
        {
            // Issue Book
            printf("Enter Student ID: ");
            scanf("%d", &studentID);
            printf("Enter Student Name: ");
            scanf("%s", &studentName);
            printf("Enter BookID: ");
            scanf("%s", &bookID);
            printf("Enter Book Title: ");
            scanf("%s", &bookTitle);
            printf("Enter number of days issued: ");
            scanf("%d", &daysIssued);

            issueAmount = daysIssued * dailyCharge;

            printf("=======\n");
            printf("BOOK ISSUE RECEIPT\n");
            printf("Student ID: %d\n", studentID);
            printf("Student Name: %s\n", studentName);
            printf("Book ID: %s\n", bookID);
            printf("Book Title: %s\n", bookTitle);
            printf("Days Issued: %d days\n", daysIssued);
            printf("Charge Per Day: Rs. %d.00\n", dailyCharge);
            printf("Total Issue Charge: Rs. %d.00\n", issueAmount);
            break;
        }
        case 2:
        {
            // Return Book
            printf("Enter Student ID: ");
            scanf("%d", &studentID);
            printf("Enter BookID: ");
            scanf("%s", &bookID);
            
            printf("Enter number of days issued: ");
            scanf("%d", &daysIssued);
            printf("Enter number of days kept: ");
            scanf("%d", &daysKept);
            
            daysOverdue = daysKept - daysIssued;
            
            if (daysOverdue > 0)
                printf("Late. Fine to be paid: Rs. %d.00\n", (dailyFine*daysOverdue));
            else    
                printf("No fine to be paid. ");
            break;
        }
        case 3:
        {
            // Calculate Fine
            printf("Enter number of overdue days: ");
            scanf("%d", &daysOverdue);

            printf("==================\n");

            printf("Fine to be paid: Rs. %d.00\n", (daysOverdue*dailyFine));
            break;
        }
        case 4: 
        {
            // Display Library Charges
            printf("Membership Fee: Rs. %d.00\n", membershipFee);
            printf("Number of books issued: %d\n", numBooksIssued);
            printf("Processing Charge per book: Rs. %d.00\n", chargePerBook);
            printf("Fine per day: Rs. %d.00\n", dailyFine);  
            break;
        }
        case 5:
        {
            // Exit
            printf("Exiting. ");
            return 0;
            break;
        }
        default:
        {
            // Error Statements
            printf("Invalid number. ");
            break;
        }

    }
    
}