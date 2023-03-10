#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}

void Accom(void)
{
    int accomodationChoice, cidate, codate;
    int confirm;
mainmenu:
    system("cls");
    printf("\n******************************************************************************************************************************\n");
    printf("\n\n\t\t\t\t\t   **Welcome to Accomodation Services !**\n");
    printf("\t\t\t\t\tAdvaita is being held from 2nd-5th of March.\n\t\t\t\tHence We are providing lodging for all the non-college students\n\t\t\t\t\t\tfrom 1st-10th of March,2023.\n");
    printf("\n******************************************************************************************************************************\n");
    printf("\n\n\t\t\t\t\t\t    *****Pricing Plan*****\n\n");
    printf("\t\t\t1)PREMIUM PLAN:\t\t\t\t\t\t\t2)NORMAL PLAN:\n");
    printf("\n\t\t\t250 Rs Per Day\t\t\t\t\t\t        100Rs Per day\n");
    printf("\n\t\t\t250 Rs Meal\t\t\t\t\t\t        250Rs Meal\n");
    printf("\t\t\t\t\t\t        Enter 1 or 2:");

    scanf("%d", &accomodationChoice);

    if (accomodationChoice == 1)
    {
    mainmenu2:
        system("cls");
        printf("\n******************************************************************************************************************************\n");
        printf("\n\n\t\t\t\t\t   **Welcome to Accomodation Services !**\n");
        printf("\t\t\t\t\tAdvaita is being held from 2nd-5th of March.\n\t\t\t\tHence We are providing lodging for all the non-college students\n\t\t\t\t\t\tfrom 1st-10th of March,2023.\n");
        printf("\n******************************************************************************************************************************\n");
        printf("\t\t\t\t\t\t  You chosed Premium Plan.\n\n\t\t\t\t\tEnter '1' to continue with Check in and Checkout date\n\n\t\t\t\t\t\t\t\tOR\n\n\t\t\t\t\t\t   Press '2' for previous menu.\n");
        scanf("%d", &confirm);

        if (confirm == 1)
        {
            system("cls");
            printf("\n******************************************************************************************************************************\n");
            printf("\n\n\t\t\t\t\t   **Welcome to Accomodation Services !**\n");
            printf("\t\t\t\t\tAdvaita is being held from 2nd-5th of March.\n\t\t\t\tHence We are providing lodging for all the non-college students\n\t\t\t\t\t\tfrom 1st-10th of March,2023.\n");
            printf("\n******************************************************************************************************************************\n");
        checkdateprem:
            printf("\n\t\t\t\t\t   Check-In Date?(enter day in numbers):");
            scanf("%d", &cidate);

            printf("\t\t\t\t\t\tCheck-Out Date?:(enter day in number):");
            scanf("%d", &codate);
            if (cidate > 10 || cidate < 1 || codate > 10 || codate < 1 || codate - cidate < 0)
            {

                printf("\t\t\t\t\t\t  Please Enter a Valid Data!\n");
                printf("\t\t\t\t\t     Redirecting to Previous Page in 5 Secs... ");
                int i;
                for (i = 0; i < 5; i++)
                {
                    // delay of one second
                    delay(1);
                }
                system("cls");
                goto checkdateprem;
            }
        }
        else if (confirm == 2)
        {
            system("cls");
            goto mainmenu;
        }
        else
        {
            printf("\t\t\t\t\t\t  Please Enter a Valid Data!\n");
            printf("\t\t\t\t\t     Redirecting to Previous Page in 5 Secs... ");
            int i;
            for (i = 0; i < 5; i++)
            {
                // delay of one second
                delay(1);
            }
            system("cls");
            goto mainmenu2;
        }
    }
    else if (accomodationChoice == 2)
    {
    mainmenu3:
        system("cls");
        printf("\n******************************************************************************************************************************\n");
        printf("\n\n\t\t\t\t\t   **Welcome to Accomodation Services !**\n");
        printf("\t\t\t\t\tAdvaita is being held from 2nd-5th of March.\n\t\t\t\tHence We are providing lodging for all the non-college students\n\t\t\t\t\t\tfrom 1st-10th of March,2023.\n");
        printf("\n******************************************************************************************************************************\n");
        printf("\t\t\t\t\t\t  You chosed Normal Plan.\n\t\t\t\t\tEnter '1' to continue with Check in and Checkout date\n\n\t\t\t\t\t\t\t\tOR\n\n\t\t\t\t\t\t   Press '2' for previous menu.\n");
        scanf("%d", &confirm);

        if (confirm == 1)
        {
            system("cls");
            printf("\n******************************************************************************************************************************\n");
            printf("\n\n\t\t\t\t\t   **Welcome to Accomodation Services !**\n");
            printf("\t\t\t\t\tAdvaita is being held from 2nd-5th of March.\n\t\t\t\tHence We are providing lodging for all the non-college students\n\t\t\t\t\t\tfrom 1st-10th of March,2023.\n");
            printf("\n******************************************************************************************************************************\n");
        checkdatenormal:
            printf("\n\t\t\t\t\t\tCheck-In Date?(enter day in numbers):");
            scanf("%d", &cidate);

            printf("\t\t\t\t\t\tCheck-Out Date?:(enter day in numbers):");
            scanf("%d", &codate);

            if (cidate > 10 || cidate < 1 || codate > 10 || codate < 1 || codate - cidate < 0)
            {

                printf("\t\t\t\t\t\t  Please Enter a Valid Data!\n");
                printf("\t\t\t\t\t     Redirecting to Previous Page in 5 Secs... ");
                int i;
                for (i = 0; i < 5; i++)
                {
                    // delay of one second
                    delay(1);
                }
                system("cls");
                goto checkdatenormal;
            }
        }
        else if (confirm == 2)
        {
            system("cls");
            goto mainmenu;
        }
    }
    else
    {
        printf("\t\t\t\t\t\t  Please Enter a Valid Data!\n");
        printf("\t\t\t\t\t     Redirecting to Previous Page in 5 Secs... ");
        int i;
        for (i = 0; i < 5; i++)
        {
            // delay of one second
            delay(1);
        }
        system("cls");
        goto mainmenu;
    }
    // logic:
    int costAcc = 0, dayOfStay = 0;
    dayOfStay = codate - cidate;

    if (accomodationChoice == 1)
    {
        system("cls");
        costAcc = costAcc + dayOfStay * 500;
        printf("\n\n\t\t\t\t\tYour Total cost of Stay including Food Expense = %d\n", costAcc);
        printf("\t\t\t\tYou will be sent a Code with email to your registered E-mail Id .\n\t\t\t\tPlease Bring your Aadhar/Pan Card for Smooth Allocation of your room.");
        printf("\n");
    }
    else if (accomodationChoice == 2)
    {
        system("cls");
        costAcc = costAcc + dayOfStay * 350;
        printf("Your Total cost of Stay including Food Expense = %d", costAcc);
        printf("You will be sent a Code with email to your registered E-mail Id .\nPay on the UPI Id for confirming the transaction and reply to email with a screenshot of Paymeny.\nPlease Bring your Aadhar/Pan Card for Smooth Allocation of your room.");
        printf("\n");
    }
    printf("\n\n\t\t\t\t\t    Thanks for using the Accomodation Service!\n");
    printf("\n\n\t\t\t\t    For any Queries,Contact our helpdesk at +91 6370462354.\n\n\n\n\n\n\n\n\n\n\n");
}
void authendesign(void)
{
    printf("\n******************************************************************************************************************************\n");
    printf("\n\t\t\t\t\t\t\tAUTHENTICATE\t\t\t\t\t\n");
    printf("\t\t\t\t\t   **Welcome to \"FEST MANAGEMENT\" Services !**\n");
    printf("\t\t\t\t\t  Advaita is being held from 2nd-5th of March\n\n");

    printf("******************************************************************************************************************************\n");
}
void festmenu(void)
{
    authendesign();
    int opt;
    printf("\n\t\t\t\t\t\t|--------------------------------|");
    printf("\n\t\t\t\t\t\t| ##YOU ARE AT FEST MAINMENU !## |\t\t\t");
    printf("\n\t\t\t\t\t\t|--------------------------------|\n");
    printf("\n\t\t\t\t|-----------|\t\t\t\t\t    |--------------|");
    printf("\n\t\t\t\t|1.TRANSPORT|\t\t\t\t");
    printf("\t    |2.ACCOMODATION|");
    printf("\n\t\t\t\t|-----------|\t\t\t\t\t    |--------------|\t\t\n");
    printf("\n\t\t\t\t      |------------|\t\t\t        |-------------|\n");
    printf("\t\t\t\t      |3.FUN EVENTS|\t\t\t\t");
    printf("|4.MERCHANDISE|");
    printf("\n\t\t\t\t      |------------|\t\t\t\t|-------------|\n");
    printf("\n\t\t\t\t\t\t\t      |------|\n");
    printf("\t\t\t\t\t\t\t      |5.EXIT|");
    printf("\n\t\t\t\t\t\t\t      |------|\n");
    printf("\n\n\t\t\t\t\t\t\tENTER YOUR RESPONSE:");
    scanf("%d", &opt);
    if (opt == 1)
    {
        printf("Enter \"7\" for Fest menu:");
        scanf("%d", &opt);
        if (opt == 7)
        {
            system("cls");
            festmenu();
        }
    }
    else if (opt == 2)
    {
        Accom();
        printf("\t\t\t\t\t\t Enter \"7\"for Fest menu:");
        scanf("%d", &opt);
        if (opt == 7)
        {
            festmenu();
        }
    }
    else if (opt == 3)
    {
        printf("Enter \"7\" for Fest menu:");
        scanf("%d", &opt);
        if (opt == 7)
        {
            festmenu();
        }
    }
    else if (opt == 4)
    {
        printf("\t\t\t\t\t\tEnter \"7\" for Fest menu:");
        scanf("%d", &opt);
        if (opt == 7)
        {
            festmenu();
        }
    }
    else if (opt == 5)
    {
        printf("\t\t\t\t\t  You will be Redirecting to AUTHENTICATE MENUE for \"EXIT\" in 5 Secs... ");
        int i;
        for (i = 0; i < 5; i++)
        {
            // delay of one second
            delay(1);
        }
        
        

    }
    else
    {
        printf("\t\t\t\t\t\t  Please Enter a Valid Data!\n");
        printf("\t\t\t\t\t     Redirecting to FEST MENU in 5 Secs... ");
        int i;
        for (i = 0; i < 5; i++)
        {
            // delay of one second
            delay(1);
        }
        festmenu();
    }
}



int main()
{
    festmenu();

    return 0;
}