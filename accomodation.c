#include <stdio.h>
int main()
{
    int accomodationChoice, cidate, codate;
    
    mainmenu:
    printf("**Welcome to Accomodation Services !**");
    printf("\n");
    printf("Advaita is being held from 2nd-5th of March.\nHence We are providing lodging for all the non-college students from 1st-10th of March,2023.\n");
    printf("** Pricing Plan \n**");
    printf("1)PREMIUM PLAN:\n");
    printf("Per Day 250 Rs\n250 Rs Meals\n");
    printf("2)NORMAL PLAN:\n");
    printf("Per Day 100 Rs\n250 Rs Meals\n");
    printf("Enter 1 or 2:");
    scanf("%d", &accomodationChoice);


    if (accomodationChoice == 1)
    {
        printf("You chosed Premium Plan.\n");
        printf("Check-In Date?(enter day in numbers):");
        scanf("%d", &cidate);

        printf("Check-Out Date?:(enter day in numbers):");
        scanf("%d", &codate);
    }
    else if (accomodationChoice == 2)
    {

        printf("You chosed Normal Plan.\n");
        printf("Check-In Date?(enter day in numbers):");
        scanf("%d", &cidate);

        printf("Check-Out Date?:(enter day in numbers):");
        scanf("%d", &codate);
    }
    else if(accomodationChoice==3){
        goto mainmenu;
    }

    // logic:
    int costAcc = 0, dayOfStay=0;
    dayOfStay = codate - cidate;

    if (accomodationChoice == 1)
    {
        costAcc = costAcc + dayOfStay * 500;
        printf("Your Total cost of Stay including Food Expense = %d", costAcc);
        printf("You will be sent a Code with email to your registered E-mail Id .Please Bring your Aadhar/Pan Card for Smooth Allocation of your room.");
        printf("\n");
    }
    else if (accomodationChoice == 2)
    {
        costAcc = costAcc + dayOfStay * 350;
        printf("Your Total cost of Stay including Food Expense = %d", costAcc);
        printf("You will be sent a Code with email to your registered E-mail Id .Please Bring your Aadhar/Pan Card for Smooth Allocation of your room.");
        printf("\n");
        
    }
    printf("Thanks for using the Accomodation Service!\n");
    printf("For any Queries,Contact our helpdesk at +91 6370462354.");



    return 0;
}