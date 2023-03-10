#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include <time.h>

void login();
void op();
void authendesign(void)
{
    printf("\n******************************************************************************************************************************\n");
    printf("\n\t\t\t\t\t\t\tAUTHENTICATE\t\t\t\t\t\n");
    printf("\t\t\t\t\t   **Welcome to \"FEST MANAGEMENT\" Services !**\n");
    printf("\t\t\t\t\t  Advaita is being held from 2nd-5th of March\n\n");

    printf("******************************************************************************************************************************\n");
}
//************************************************TIME DELAY PART************************************************
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
typedef struct geographical_DISTANCE
{
    char state[20];
    // char stateCode[5];
    float distanceByTrain;
    float distanceByFlight;
    float distanceByBus;
} gd;

//************************************************ACCOMODATION*************************************************************

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
int Merchandise()
{
    typedef struct
    {
        int merchno;
        int quantity;
        int Size;
        int price;
    } Merchandise;

    Merchandise item;

    char conformation;
    int merchno;
    int quantity;
    int Size;
    int price;

    printf("Merchandise List :\n");
    printf("1. Hoodie (INR 350/piece)\n");
    printf("2. Shirt (INR 300/piece)\n");
    printf("3. T-Shirt (INR 250/piece)\n");
    printf("4. Trouser (INR 300/piece)\n");
    printf("5. Sweatshirt (INR 275/piece)\n");
    printf("Enter the number of that merchandise from the above :");
    scanf("%d", &merchno);

    //    input of the size

    printf("Size List :\n");
    printf("1. XS\n");
    printf("2. S\n");
    printf("3. M\n");
    printf("4. L\n");
    printf("5. XL\n");
    printf("6. XXL\n");
    printf("Enter the number of your required Size: ");
    scanf("%d", &Size);

    //    input of the quantity

    printf("Enter the quantity of the merchandise: ");
    scanf("%d", &quantity);

    //      Merch info

    printf("\nMerchandise Information:\n");
    printf("Name :");
    switch (merchno)
    {
    case 1:
        printf("Hoodie\n");
        break;
    case 2:
        printf("Shirt\n");
        break;
    case 3:
        printf("T-Shirt\n");
        break;
    case 4:
        printf("Trouser\n");
        break;
    case 5:
        printf("Sweatshirt\n");
        break;
    default:
        break;
    }
    printf("Size :");
    switch (Size)
    {
    case 1:
        printf("XS\n");
        break;
    case 2:
        printf("S\n");
        break;
    case 3:
        printf("M\n");
        break;
    case 4:
        printf("L\n");
        break;
    case 5:
        printf("XL\n");
        break;
    case 6:
        printf("XXL\n");
        break;
    default:
        break;
    }
    printf("Quantity: %d\n", quantity);

    switch (merchno)
    {
    case 1:
        price = 350 * quantity;
        break;
    case 2:
        price = 300 * quantity;
        break;
    case 3:
        price = 250 * quantity;
        break;
    case 4:
        price = 300 * quantity;
        break;
    case 5:
        price = 275 * quantity;
        break;
    default:
        price = 0;
        break;
    }
    printf("Price : %d\n", price);

    //    conformation
    printf("Do you want to conform this order ?(y/n)");
    scanf("%s", &conformation);

    if (conformation == 'y')
    {
        item.merchno = merchno;
        item.Size = Size;
        item.quantity = quantity;
        item.price = price;
    }

    printf("\n\n\n");

    printf("Thank you!\n");
    printf("IIIT will be waiting for your presence in the fest.😊\n");

    printf("\n\n\n");

    printf("For any other queries please contact:\n");
    printf("SMS / Whatsapp : 7834753649\n");
    printf("Email : customerhelpline@gmail.com\n");

    return 0;
}
//*************FUNCTION CALL**********************************
void transport()
{

    //*****************************GREETING MESSAGE*******************

main:
    printf("\t\t\t\t\t     Welcome to transport facility!\n");
    printf("\n");

    //************************USER STATE EXTRACTION****************************
    char stateOfUser[20];
    printf("\t\t\t\t\t     In which state do you live?:");
    gets(stateOfUser);
    printf("%s",stateOfUser);
    

    strcpy(stateOfUser, strlwr(stateOfUser));

    //**********************DATABASE********************************

    gd pb = {"punjab", 2100, 1607.01, 2031.47};
    gd wb = {"west bengal", 400, 470.69, 556.68};
    gd assam = {"assam", 1000, 970.43, 1353.00};
    gd goa = {"goa", 1693.20, 1364.58, 1640.79};
    gd mp = {"madhya pradesh", 1000, 837.31, 1119.64};
    gd andhrap = {"andhra pradesh", 750, 810.57, 929.48};
    gd arunachalp = {"arunachal pradesh", 2600, 1216.48, 1811.39};
    gd bihar = {"bihar", 700, 548.18, 705.19};
    gd chattisgarh = {"chattisgarh", 500, 446.07, 553.61};
    gd delhi = {"delhi", 1800, 1273.43, 1635.87};
    gd guj = {"gujarat", 1600, 1486.29, 1780.50};
    gd haryana = {"haryana", 1900, 1383.22, 1753.86};
    gd jharkhand = {"jharkhand", 300, 388.22, 511.70};
    gd karnataka = {"karnataka", 1500, 1229.73, 1474.75};
    gd kerala = {"kerala", 2300, 1483.10, 1824.72};
    gd maharashtra = {"maharashtra", 1400, 1031.70, 1292.42};
    gd manipur = {"manipur", 2400, 988.91, 1399.35};
    gd meghalaya = {"meghalaya", 1800, 809.26, 1185.38};
    gd mizoram = {"mizoram", 2400, 800.23, 1384.59};
    gd nagaland = {"nagaland", 2400, 1095.89, 1626.07};
    gd rajasthan = {"rajasthan", 1700, 1400.05, 1833.09};
    gd tamilnadu = {"tamilnadu", 1700, 1306.26, 1580.21};
    gd telangana = {"telangana", 1000, 759.46, 1001.71};
    gd tripura = {"tripura", 2200, 758.22, 1005.45};
    gd up = {"uttar pradesh", 1100, 932.26, 1206.90};
    gd uk = {"uttarakhand", 1100, 1291.25, 1729.47};
    gd hp = {"himachal pradesh", 1596, 1551.33, 2134.09};
    // more states to be added.

    //*************************GEOGRAPHICAL_DIST ARRAY INIT*******************
    gd locationState[28] = {pb, wb, assam, goa, mp, andhrap, arunachalp, bihar, chattisgarh, delhi, guj, haryana, jharkhand, karnataka, kerala, maharashtra, manipur, meghalaya, mizoram, nagaland, rajasthan, tamilnadu, telangana, tripura, up, uk, hp};
    float extra_kilometers;
    int userchoice;
    float *traindistpointer, *flightdistpointer, *busdistpointer;

    //**********************ITERATING THROUGH THE locationState[].state to tap into its details**********************

    // again:

    int statewrongdetector = 0;

    for (int i = 0; i < 28; i++)
    {

        if (strcmp(locationState[i].state, stateOfUser) == 0)
        {
        distancecap:
            printf("\t\t\t\t\tHow far are you from the main capital of %s?:\n", locationState[i].state);
            scanf("%d", &extra_kilometers);
            printf("\t\t\t\t\t     Which mode of travel you want to have?:\n\t\t\t1)By Train\t\t\t2)By Bus\t\t\t\t3)By Flight\n");
            scanf("%d", &userchoice);

            //*********************DISTANCE LOGIC USING POINTERS.***************************|
            // NOTE:USED POINTERS TO TAKE THE DATA OUT OF LOCAL SCOPE.
            float userdistbytrain = locationState[i].distanceByTrain + extra_kilometers;
            float userdistbyflight = locationState[i].distanceByFlight + extra_kilometers;
            float userdistbybus = locationState[i].distanceByBus + extra_kilometers;
            (traindistpointer) = &(userdistbytrain);
            (flightdistpointer) = &(userdistbyflight);
            (busdistpointer) = &(userdistbybus);
        }

        else
        {
            statewrongdetector++;
        }
    }
    if (statewrongdetector == 28)
    {
        system("cls");
        printf("\n\n\t\t\t\t\t\t  Please Enter a Valid Data!\n");
        printf("\n\n\t\t\t\t\t     Redirecting to Previous Page in 5 Secs... ");
        int i;
        for (i = 0; i < 5; i++)
        {
            // delay of 5 second
            delay(1);
        }
        system("cls");

        goto main;
    }

    //*********************ASSIGNING VALUES TO SIMPLER VAR**********************
    float distanceOfuser_BYTRAIN = *traindistpointer;
    float distanceOfuser_BYFLIGHT = *flightdistpointer;
    float distanceOfuser_BYBUS = *busdistpointer;
    int trainChoice, flightChoice, busChoice;

    printf("\t\t\tThe distance between your current location and IIIT-BBS through Train Route is %.2f \n", distanceOfuser_BYTRAIN);
    printf("\t\t\tThe distance between your current location and IIIT-BBS through Flight Route is %.2f \n", distanceOfuser_BYFLIGHT);
    printf("\t\t\tThe distance between your current location and IIIT-BBS through Bus Route is %.2f \n\n", distanceOfuser_BYBUS);

    //****************************PRICING PLAN:*********************
    float ac1c = 3.53;
    float ac2t = 2.08;
    float fc = 2.32;
    float ac3t = 1.46;
    float acc = 1.40;
    float sc = 0.62;
    float acs = 2.09;
    float nas = 1.74;
    float gb = 0.64;
    float indigo = 5.02;
    float jetairways = 3.89;
    float vistara = 4.23;
    float airindia = 3.02;
    float costByTrain, CostByBus, CostByFlight;
    float total_cost;

    //*********************COST CALCULATION FOR TRAIN ROUTE******************

    if (userchoice == 1)
    {
        printf("\t\t\t\t\t\t\t Train Pricing Plan:\n\t\t\t\t\t\t\t    *Base Price*\n\n\t\t\t\t\t\t 1)AC First Class:Rs 3.53/Km\n\n\t\t\t\t\t\t 2)AC Two Tier:Rs 2.08/Km\n\n\t\t\t\t\t\t 3)First Class:Rs 2.32/Km\n\n\t\t\t\t\t\t 4)AC 3*Tier:Rs 1.46/Km\n\n\t\t\t\t\t\t 5)AC Chair Car:Rs 1.40/Km\n\n\t\t\t\t\t\t 6)Sleeper Class:Rs 0.62/Km\n\n\t\t\t\t\t  *Registration and Processing Fee:Rs 60*\n\t\t\t\t\t\t\tGST:5 percent.");
        scanf("%d", &trainChoice);
        if (trainChoice == 1)
        {
            costByTrain = ac1c * distanceOfuser_BYTRAIN;
        }
        else if (trainChoice == 2)
        {
            costByTrain = ac2t * distanceOfuser_BYTRAIN;
        }
        else if (trainChoice == 3)
        {
            costByTrain = fc * distanceOfuser_BYTRAIN;
        }
        else if (trainChoice == 4)
        {
            costByTrain = ac3t * distanceOfuser_BYTRAIN;
        }
        else if (trainChoice == 5)
        {
            costByTrain = acc * distanceOfuser_BYTRAIN;
        }
        else if (trainChoice == 6)
        {
            costByTrain = sc * distanceOfuser_BYTRAIN;
        }

        float gst_train = (costByTrain * 5.00) / 100.00;
        total_cost = costByTrain + gst_train + 60.0;
    }

    //****************************************COST CALCULATION THROUGH BUS ROUTE*****************************
    else if (userchoice == 2)
    {
        printf("\t\t\t\t\t\t\t Bus Pricing Plan:\n\t\t\t\t\t\t\t    *Base Price*\n\n\t\t\t\t\t\t 1)AC Sleeper Bus Premium:Rs 2.09/km\n\n\t\t\t\t\t\t 2)Non*AC Sleeper Bus Premium:Rs 1.74/km\n\n\t\t\t\t\t\t 3)General Seat Bus:Rs 0.64/Km");
        scanf("%d", &busChoice);
        if (busChoice == 1)
        {
            CostByBus = acs * distanceOfuser_BYBUS;
        }
        else if (busChoice == 2)
        {
            CostByBus = nas * distanceOfuser_BYBUS;
        }
        else if (busChoice == 3)
        {
            CostByBus = gb * distanceOfuser_BYBUS;
        }
        float gst_bus = (CostByBus * 5.00) / 100.00;
        total_cost = CostByBus + gst_bus + 60.00;
    }

    //**************************COST CALCULATION THROUGH FLIGHT ROUTE*****************

    else
    {
        printf("\t\t\t\t\t\t\t Flight Pricing Plan:\n\t\t\t\t\t\t\t    *Base Price*\n\n\t\t\t\t\t\t\t 1)Indigo:Rs 5.02/Km\n\n\t\t\t\t\t\t\t 2)Jet Airways:Rs 3.89/km\n\n\t\t\t\t\t\t\t 3)Vistara :Rs 4.23/Km\n\n\t\t\t\t\t\t\t 4)Air India :Rs 3.02/Km\n");
        scanf("%d", &flightChoice);
        if (flightChoice == 1)
        {
            CostByFlight = indigo * distanceOfuser_BYFLIGHT;
        }
        else if (flightChoice == 2)
        {
            CostByFlight = jetairways * distanceOfuser_BYFLIGHT;
        }
        else if (flightChoice == 3)
        {
            CostByFlight = airindia * distanceOfuser_BYFLIGHT;
        }
        else if (flightChoice == 4)
        {
            CostByFlight = vistara * distanceOfuser_BYFLIGHT;
        }
        float gst_flight = (CostByFlight * 5.00) / 100.00;
        total_cost = CostByFlight + gst_flight + 60.00;
    }

    printf("\n\t\t\t\t\t   Your Total Cost of journey is  %.2f\n", total_cost);

    int hour = 0;
    int min = 0;
    int day = 0;
    int month = 3;
    int year = 2023;

timing:
    printf("\n\n\t\t\t\t      Please select the time for departure[12 HOUR FORMAT]:");
    printf("\n\t\t\t\t\t\t\t   Hour:\n");
    scanf("%d", &hour);

    printf("\n\t\t\t\t\t\t\t   Minute:\n");
    scanf("%d", &min);

    printf("\n\t\t\t\t\t\t\t   Day:\n");
    scanf("%d", &day);

    // age,name,gender from FILE IO.
    // train,bus,flight
    if (userchoice == 1)
    {
        printf("%c*******************************************************************************************************************************%c", 201, 187);
        printf("\n");
        printf("|\t\t\t\t\t\tBOARDING PASS\t\t\t\t\t\t\t\t\t\t|\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n|\t\t\t\tTRAIN\t\tBoarding-Time\tGate\tSeat\t\t\t\t\t\t\t        |\n");
        printf("|\t\t\t\tABC1285\t\t%d:%d\t\t15\t11A                     \t\t\t\t\t|\n", hour, min);
        printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
        printf("|\t\t\t\tPASSENGER NAME:FILE IO\t\t    Class:Economy\t\t\t\t\t\t\t|");
        printf("\n");
        printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
        printf("|\t\t\t\tFrom:%s\t\t    To:Bhubaneswar/BBS\t\t\t\t\t\t\t|", stateOfUser);
        printf("\n");
        printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
        printf("|\t\t\t\tDATE:%d-March-2023\t\t\t\t\t\t\t\t\t\t\t|\n", day);
        printf("%c*******************************************************************************************************************************%c", 192, 188);
    }

    else if (userchoice = 2)
    {

        printf("%c*******************************************************************************************************************************%c", 201, 187);
        printf("\n");
        printf("|\t\t\t\t\t\tBOARDING PASS\t\t\t\t\t\t\t\t\t\t|\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n|\t\t\t\tBus\t\tBoarding-Time\tGate\tSeat\t\t\t\t\t\t\t        |\n");
        printf("|\t\t\t\tABC1285\t\t%d:%d\t\t15\t11A                     \t\t\t\t\t|\n", hour, min);
        printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
        printf("|\t\t\t\tPASSENGER NAME:FILE IO\t\t    Class:Economy\t\t\t\t\t\t\t|");
        printf("\n");
        printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
        printf("|\t\t\t\tFrom:%s\t\t    To:Bhubaneswar/BBS\t\t\t\t\t\t\t|", stateOfUser);
        printf("\n");
        printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
        printf("|\t\t\t\tDATE:%d-March-2023\t\t\t\t\t\t\t\t\t\t\t|\n", day);
        printf("%c*******************************************************************************************************************************%c", 192, 188);
    }
    else if (userchoice == 3)
    {
        printf("%c*******************************************************************************************************************************%c", 201, 187);
        printf("\n");
        printf("|\t\t\t\t\t\tBOARDING PASS\t\t\t\t\t\t\t\t\t\t|\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n|\t\t\t\tFlight\t\tBoarding-Time\tGate\tSeat\t\t\t\t\t\t\t        |\n");
        printf("|\t\t\t\tABC1285\t\t%d:%d\t\t15\t11A                     \t\t\t\t\t|\n", hour, min);
        printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
        printf("|\t\t\t\tPASSENGER NAME:FILE IO\t\t    Class:Economy\t\t\t\t\t\t\t|");
        printf("\n");
        printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
        printf("|\t\t\t\tFrom:%s\t\t    To:Bhubaneswar/BBS\t\t\t\t\t\t\t|", stateOfUser);
        printf("\n");
        printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
        printf("|\t\t\t\tDATE:%d-March-2023\t\t\t\t\t\t\t\t\t\t\t|\n", day);
        printf("%c*******************************************************************************************************************************%c", 192, 188);
    }
}

int Funevent(int a){
    int event;
    int price;
    int age;
    char conformation;
    printf("\n******************************************************************************************************************************\n");
    printf("\t\t\t\t\t\t\tHello!\n\t\t\t***Welcome to the funzone where you would experience exotic events.***\n");
    printf("\n******************************************************************************************************************************\n");
    printf("Please enter your age: ");
    scanf("%d", &age);
    
    if(age < 18){
        
        printf("Age requirment is 18+ to participate in any event\n");
        printf("Thank you :)\n");
        printf("See you next year.👋🏻\n");
        
    }
    else{
        
        printf("Event Name List\n");
        printf("1. Event1 (INR 500)\n");
        printf("2. Event2 (INR 400)\n");
        printf("3. Event3 (INR 550)\n");
        printf("4. Event4 (INR 450)\n");
        printf("5. Event5 (INR 300)\n");
        
        printf("Please enter the event number :");
        scanf("%d", &event);
        
        printf("you have registered for ");
        
        switch(event){
            case 1:
                printf("Event1.\n");
                break;
            case 2:
                printf("Event2.\n");
                break;
            case 3:
                printf("Event3.\n");
                break;
            case 4:
                printf("Event4.\n");
                break;
            case 5:
                printf("Event5.\n");
                break;
            default:
                break;
        }
        
        switch(event){
            case 1:
                price = 500;
                break;
            case 2:
                price = 400;
                break;
            case 3:
                price = 550;
                break;
            case 4:
                price = 450;
                break;
            case 5:
                price = 300;
                break;
            default:
                price = 0;
                break;
        }
        
        printf("Price : %d\n", price);
        
        printf("Do you want to conform this ?(y/n)");
        scanf("%s",&conformation);
        
        if(conformation == 'y'){
//          take the data of event number and price
            
            printf("\n\n");
            
            printf("Thank you!\nYou have registered for the events. We will contact you soon with more information.");
            
            printf("\n\n");
            
            printf("For any other queries please contact:\n");
            printf("SMS / Whatsapp : 7834753649\n");
            printf("Email : customerhelpline@gmail.com\n");
        }
        else{
            printf("\n\n");
            
            printf("Thank you!\n");
            printf("IIIT will be waiting for your presence in the fest.😊\n");
            
            printf("\n\n");
            
            printf("For any other queries please contact:\n");
            printf("SMS / Whatsapp : 7834753649\n");
            printf("Email : customerhelpline@gmail.com\n");
        }
    }
    return 0;
}

//*****************************************************FEST MENU********************************************************
void festmenu(void)
{
    system("cls");
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
    printf("\n\t\t\t\t\t\t\t\t|------|\n");
    printf("\t\t\t\t\t\t\t\t|5.EXIT|");
    printf("\n\t\t\t\t\t\t\t\t|------|\n");
    printf("\n\n\t\t\t\t\t\t\tENTER YOUR RESPONSE:");
    scanf("%d", &opt);
    if (opt == 1)
    {
        transport();
        printf("Enter \"7\" for Fest menu:");
        scanf("%d", &opt);
        if (opt == 7)
        {

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
        Funevent(1);
        printf("Enter \"7\" for Fest menu:");
        scanf("%d", &opt);
        if (opt == 7)
        {
            festmenu();
        }
    }
    else if (opt == 4)
    {
        Merchandise();
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
        op();
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
//********************************************************INPUT*******************************************************
void takeinput(char ch[40])
{
    fgets(ch, 40, stdin);
    ch[strlen(ch) - 1] = 0;
}

char generateusername(char email[40], char username[40])
{
    for (int i = 0; i < strlen(email); i++)
    {
        username[i] = email[i];
    }
}
void takepassword(char pwd[50])
{
    int i = 0;
    char ch;
    while (1)
    {
        ch = getch();
        if (ch == 13 || ch == 9)
        {
            pwd[i] = '\0';
            break;
        }
        else
        {
            pwd[i] = ch;
            i++;
            printf("*");
        }
    }
}
typedef struct user
{
    char name[40];
    char password[40];
    char username[40];
    char email[40];
    char phone[40];
} users;
void regis()
{
    FILE *f;
    char password2[40];
    users user;
    int opt;
    printf("\nEnter Name:-\t");
    takeinput(user.name);
    printf("Email Address:-\t");
    takeinput(user.email);
    printf("Phone number:-\t");
    takeinput(user.phone);
    printf("\nPassword Should be unique\n");
    printf("ENTER Password:-\t");
    takepassword(user.password);
    printf("\nCONFIRM Password:-\t");
    takepassword(password2);

    if (!strcmp(user.password, password2))
    {
        generateusername(user.email, user.username);
        f = fopen("Users.txt", "w+");
        fwrite(&user, sizeof(users), 1, f);
        if (fwrite != 0)
        {
            printf("\n\nUser resgistration success, Your username is %s", user.username);
            fclose(f);
            printf("\n\t\t\t\t\t     Redirecting to Authenticate Page in 5 Secs... ");
            int i;
            for (i = 0; i < 5; i++)
            {
                // delay of one second
                delay(1);
            }
            system("cls");

            op();
        }

        else
            printf("\n\nSorry! Something went wrong :(");
    }

    else
    {
        printf("\n\n\"YOUR PASSWORD NOT MATCHED\"\n");
        printf("\t\t\t\t\t\t  Please Re-enter!\n");
        printf("\t\t\t\t\t     Redirecting to Previous Page in 5 Secs... ");
        int i;
        for (i = 0; i < 5; i++)
        {
            // delay of one second
            delay(1);
        }
        system("cls");
        authendesign();
        regis();
    }
}

//*******************************************************LOGIN******************************************************
void login()
{
    FILE *fp;
    int count = 0;
    char uname[40];
    int opt;

    char pword[40];
    users usr;

    printf("\nEnter your username:\t");
    takeinput(uname);
    printf("Enter your password:\t");
    takepassword(pword);
    fp = fopen("Users.txt", "r");
    while (fread(&usr, sizeof(users), 1, fp))
    {
        if (!strcmp(usr.username, uname))
        {
            if (!strcmp(usr.password, pword))
            {
                system("cls");
                festmenu();
            }
            else
            {
                printf("\n\nInvalid Password!");
            }
            count = 1;
        }
    }
    if (!count)
    {
        printf("\n\nUser is not registered!");
    }
    fclose(fp);
}

void op()
{

    authendesign();
    int opt;

    printf("\n\t\t\t\t\t\t   Please Choose Your Operation:-\n\n");
    printf("\t|---------|\t\t\t\t\t|--------|\t\t\t\t\t |-------|");
    printf("\n\t|1. Signup|");
    printf("\t\t\t\t\t|2. Login|");
    printf("\t\t\t\t\t |3. Exit|\n");
    printf("\t|---------|\t\t\t\t\t|--------|\t\t\t\t\t |-------|");
    printf("\n\n\t\t\t\t\t\t    Enter Your Choice:-");
    scanf("%d", &opt); // scanf will include"\n"
    fgetc(stdin);
    if (opt == 1)
    {
        regis();
    }
    else if (opt == 2)
    {
        login();
    }
    else
    {
        printf("\t\t\t\t\t\t\t\"SEE YOU SOON IN ADVAITA\":)");
    }
}
int main()

{

    op();

    return 0;
}