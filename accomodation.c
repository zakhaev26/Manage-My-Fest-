#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int accomodationChoice, cidate, codate;
    int confirm;
mainmenu:
    printf("\t\t\t\t\t   **Welcome to Accomodation Services !**");
    printf("\n");
    printf("\t\t\t\t\tAdvaita is being held from 2nd-5th of March.\n\t\t\t\tHence We are providing lodging for all the non-college students\n\t\t\t\t\t\tfrom 1st-10th of March,2023.\n");
    printf("\n\n\t\t\t\t\t\t    *****Pricing Plan*****\n\n");
    printf("\t\t\t1)PREMIUM PLAN:\t\t\t\t\t\t\t2)NORMAL PLAN:\n");
    printf("\n\t\t\t250 Rs Per Day\t\t\t\t\t\t        100Rs Per day\n");
    printf("\n\t\t\t250 Rs Meal\t\t\t\t\t\t        250Rs Meal\n");
    printf("\t\t\t\t\t\t        Enter 1 or 2:");
    scanf("%d", &accomodationChoice);

    if (accomodationChoice == 1)
    {
        system("cls") ;
        printf("\t\t\t\t\t\t  You chosed Premium Plan.\n\t\t\t\t\tEnter '1' to continue with Check in and Checkout date\n\n\t\t\t\t\t\t\t\tOR\n\n\t\t\t\t\t\t   Press '2' for previous menu.\n");
        scanf("%d", &confirm);

        if (confirm == 1)
        {   system("cls") ;
            printf("\t\t\t\t\t\tCheck-In Date?(enter day in numbers):");
            scanf("%d", &cidate);

            printf("\t\t\t\t\t\tCheck-Out Date?:(enter day in numbers):");
            scanf("%d", &codate);
        }
        else if (confirm == 2)
        {   system("cls") ;
            goto mainmenu;
        }
    }
    else if (accomodationChoice == 2)
    {
        system("cls") ;
        printf("\t\t\t\t\t\t  You chosed Normal Plan.\n\t\t\t\t\tEnter '1' to continue with Check in and Checkout date\n\n\t\t\t\t\t\t\t\tOR\n\n\t\t\t\t\t\t   Press '2' for previous menu.\n");
        scanf("%d", &confirm);

        if (confirm == 1)
        {
            system("cls") ;
            printf("\t\t\t\t\t\tCheck-In Date?(enter day in numbers):");
            scanf("%d", &cidate);

            printf("\t\t\t\t\t\tCheck-Out Date?:(enter day in numbers):");
            scanf("%d", &codate);
        }
        else if (confirm == 2)
        {
            system("cls") ;
            goto mainmenu;
        }
    }

    // logic:
    int costAcc = 0, dayOfStay = 0;
    dayOfStay = codate - cidate;

    if (accomodationChoice == 1)
    {   system("cls") ;
        costAcc = costAcc + dayOfStay * 500;
        printf("\n\n\t\t\t\t\tYour Total cost of Stay including Food Expense = %d\n", costAcc);
        printf("\t\t\t\tYou will be sent a Code with email to your registered E-mail Id .\n\t\t\t\tPlease Bring your Aadhar/Pan Card for Smooth Allocation of your room.");
        printf("\n");
    }
    else if (accomodationChoice == 2)
    {system("cls") ;
        costAcc = costAcc + dayOfStay * 350;
        printf("Your Total cost of Stay including Food Expense = %d", costAcc);
        printf("You will be sent a Code with email to your registered E-mail Id .\nPay on the UPI Id for confirming the transaction and reply to email with a screenshot of Paymeny.\nPlease Bring your Aadhar/Pan Card for Smooth Allocation of your room.");
        printf("\n");
    }
    printf("\n\n\t\t\t\t\t    Thanks for using the Accomodation Service!\n");
    printf("\n\n\t\t\t\t    For any Queries,Contact our helpdesk at +91 6370462354.");

    return 0;
}