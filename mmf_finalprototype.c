#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include <time.h>

//***********************************NABAJYOTI *********************************
#define ENTER 13
#define TAB 9
#define BCKSPC 8

typedef struct user
{
    char name[40];
    char password[40];
    char username[40];
    char email[40];
    char phone[40];
} users;

typedef struct geographical_DISTANCE
{
    char state[20];
    // char stateCode[5];
    float distanceByTrain;
    float distanceByFlight;
    float distanceByBus;
} gd;

void takeinput(char ch[40])
{
    fgets(ch, 40, stdin);
    ch[strlen(ch) - 1] = 0;
}

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

void authendesign(void)
{
    printf("\n******************************************************************************************************************************\n");
    printf("\n\t\t\t\t\t\t\tAUTHENTICATE\t\t\t\t\t\n");
    printf("\t\t\t\t\t   **Welcome to \"FEST MANAGEMENT\" Services !**\n");
    printf("\t\t\t\t\t  Advaita is being held from 2nd-5th of March\n\n");

    printf("******************************************************************************************************************************\n");
}

int Funevent()
{
    char event[50];
    int age;
    printf("Please enter your age: ");
    scanf("%d", &age);
    if (age < 18)
    {
        printf("Age requirment is 18+ to participate in any event\n");
        printf("Thank you 😊\n");
        printf("See you next year.👋🏻\n");
    }
    else
    {
        printf("Event Name (event code)\n");
        printf("Event1 (1)\n");
        printf("Event2 (2)\n");
        printf("Event3 (3)\n");
        printf("Event4 (4)\n");
        printf("Event5 (5)\n");
        printf("Please enter the event code numbers with ',' of the events you want to participate in: ");
        scanf("%s", event);
        printf("Thank you! You have registered for the events. We will contact you soon with more information.\n");
    }
    return 0;
}


int Merchandise()
{
    typedef struct
    {
        char name[50];
        int quantity;
        char Size[10];
    } Merchandise;

    Merchandise item;

    printf("Enter the name of the merchandise (max %d characters): ", 50);
    fgets(item.name, 50, stdin);
    item.name[strcspn(item.name, "\n")] = '\0';

    printf("Enter the Size of the merchandise: ");
    fgets(item.Size, 10, stdin);
    item.name[strcspn(item.Size, "\n")] = '\0';

    printf("Enter the quantity of the merchandise: ");
    scanf("%d", &item.quantity);

    printf("\nMerchandise Information:\n");
    printf("Name: %s\n", item.name);
    printf("Size: %s", item.Size);
    printf("Quantity: %d\n", item.quantity);

    return 0;
}

char generateusername(char name[40], char username[40])
{
    int ascii;
    for (int i = 0; i < strlen(name); i++)
    {
        if (i % 2 != 0 && name[i] < 32)
        {
            ascii = name[i] + 32;
            name[i] = ascii;
            username[i] = name[i];
        }
        else if (i % 2 != 0 && name[i] > 32)
        {
            ascii = name[i] - 32;
            name[i] = ascii;
            username[i] = name[i];
        }
        else
        {
            username[i] = name[i];
        }
    }
}

void takepassword(char pwd[50])
{
    int i = 0;
    char ch;
    while (1)
    {
        ch = getch();
        if (ch == ENTER || ch == TAB)
        {
            pwd[i] = '\0';
            break;
        }
        else if (ch == BCKSPC)
        {
            if (i > 0)
            {
                i--;
                printf("\b \b");
            }
        }
        else
        {
            pwd[i] = ch;
            i++;
            printf("*");
        }
    }
}

void regis()
{
    FILE *f;
    char password2[40];
    users user;
    printf("\nEnter Name:-\t");
    takeinput(user.name);
    printf("Email Address:-\t");
    takeinput(user.email);
    printf("Phone number:-\t");
    takeinput(user.phone);
    printf("\nPassword Should be unique\n");
    printf("ENTER Password:-\t");
    takepassword(user.password);
    printf("\nConfirm Password:-\t");
    takepassword(password2);

    if (!strcmp(user.password, password2))
    {
        generateusername(user.name, user.username);
        f = fopen("Users.dat", "a+");
        fwrite(&user, sizeof(users), 1, f);
        if (fwrite != 0)
            printf("\n\nUser resgistration success, Your username is %s", user.username);
        else
            printf("\n\nSorry! Something went wrong :(");
        fclose(f);
    }
    else
    {
        printf("\n\n\"YOUR PASSWORD NOT MATCHED\"\n");
    }
}
void menuMain(users usr)
{
    system("cls");
    authendesign();
    printf("\n\t\t\t\t\t\tWelcome %s", usr.name);
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

    printf("\t\t\t\t\t\t\tENTER YOUR RESPONSE:\t");
}

void login()
{
    FILE *fp;
    int count = 0;
    char uname[40];
    int opt;
    char flag, m;
    char pword[40];
    users usr;

    printf("\nEnter your username:\t");
    takeinput(uname);
    printf("Enter your password:\t");
    takepassword(pword);

    fp = fopen("Users.dat", "r");
    while (fread(&usr, sizeof(users), 1, fp))
    {
        if (!strcmp(usr.username, uname))
        {
            if (!strcmp(usr.password, pword))
            {
                mainMenu(usr);
            }
            else
            {
                printf("\n\nInvalid Password!");
            }
            count = 1;
        
    }
    if (!count)
    {
        printf("\n\nUser is not registered!");
    }
    fclose(fp);
}
void transport()
{

    //*****************************GREETING MESSAGE*******************
    // mainmenu:
    printf("\t\t\t\t\t     Welcome to transport facility!\n");
    printf("\n");

    //************************USER STATE EXTRACTION****************************
    char stateOfUser[20];
    printf("\t\t\t\t\t     In which state do you live?:");
    fgets(stateOfUser, 100, stdin);

    stateOfUser[strcspn(stateOfUser, "\n")] = '\0';
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

    for (int i = 0; i < 28; i++)
    {

        if (strcmp(locationState[i].state, stateOfUser) == 0)
        {

            printf("\t\t\t\t\tHow far are you from the main capital of %s?:\n", locationState[i].state);
            scanf("%f", &extra_kilometers);
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
        // else if(strcmp(locationState[i].state,stateOfUser)!=0)
        // {
        //     printf("\t\t\tEnter a valid data!Check for typos and dont include excess space and numbers!\n\n\n");
        //     printf("\t\t\t\t\tRedirecting to Previous Page in 5 Secs... ");

        //     for (i = 0; i < 5; i++)
        //     {
        //         delay(1);
        //     }
        //     system("cls");
        //     goto mainmenu;
        // }
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

    int hour;
    int min;
    int day;
    int month = 3;
    int year = 2023;

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

void accomodation()
{
    int accomodationChoice, cidate, codate;
    int confirm;
mainmenu:
    printf("\t\t\t\t\t   **Welcome to Accomodation Services !\n**");
    printf("\t\t\t\t\tAdvaita is being held from 2nd-5th of March.\n\t\t\t\tHence We are providing lodging for all the non-college students\n\t\t\t\t\t\tfrom 1st-10th of March,2023.\n");
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
        printf("\t\t\t\t\t   **Welcome to Accomodation Services !\n**");
        printf("\t\t\t\t\tAdvaita is being held from 2nd-5th of March.\n\t\t\t\tHence We are providing lodging for all the non-college students\n\t\t\t\t\t\tfrom 1st-10th of March,2023.\n\n");
        printf("\t\t\t\t\t\t  You chosed Premium Plan.\n\n\t\t\t\t\tEnter '1' to continue with Check in and Checkout date\n\n\t\t\t\t\t\t\t\tOR\n\n\t\t\t\t\t\t   Press '2' for previous menu.\n");
        scanf("%d", &confirm);

        if (confirm == 1)
        {
            system("cls");
            printf("\t\t\t\t\t   **Welcome to Accomodation Services !\n**");
            printf("\t\t\t\t\tAdvaita is being held from 2nd-5th of March.\n\t\t\t\tHence We are providing lodging for all the non-college students\n\t\t\t\t\t\tfrom 1st-10th of March,2023.\n");
        checkdateprem:
            printf("\t\t\t\t\t   Check-In Date?(enter day in numbers):");
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
        printf("\t\t\t\t\t\t  You chosed Normal Plan.\n\t\t\t\t\tEnter '1' to continue with Check in and Checkout date\n\n\t\t\t\t\t\t\t\tOR\n\n\t\t\t\t\t\t   Press '2' for previous menu.\n");
        scanf("%d", &confirm);

        if (confirm == 1)
        {
            system("cls");
        checkdatenormal:
            printf("\t\t\t\t\t\tCheck-In Date?(enter day in numbers):");
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

int main()
{
    authendesign();
    // FILE MANAGEMENT
    FILE *fp;
    // login& signup
    int opt, count = 0;

    printf("\nPlease Choose Your Operation:-");
    printf("\n 1. Signup");
    printf("\n 2. Login");
    printf("\n 3. Exit");

    printf("\n\nEnter Your Choice:-");
    scanf("%d", &opt); // scanf will include"\n"
    fgetc(stdin);
    if (opt == 1)
    {
        regis();
        exit(0);
    }
    else if (opt == 2)
    {
        login();
        exit(0);
    }

    return 0;
}


