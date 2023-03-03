#include <stdlib.h>
#include <stdio.h>

//Function declarations.
int mass();
int length();
int area();
int data();
int temperature();
int time();
int volume();
int speed();

//Temperature functions
float convertToFahrenheit(float celsius) {
    return (celsius * 9/5) + 32;
}

float convertToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

int main()
{
    //Variable declaration.
    int choice=0;
    char temp; // Variable to store user invalid choice

    //UI Design.
    master:
    printf("\n***********************************");
    printf("\n***  WELCOME TO UNIT CONVERTER  ***");
    printf("\n***********************************\n");

    //Main program loop.
    while(1)
    {
        printf("\nChoose an option below to proceed.\n");
        printf("1. Mass\t\t2. Length\n3. Area\t\t4. Data\n5. Temperature\t6. Time\n7. Volume\t8. Speed\n\t9. Exit\n\n--> ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                if(!mass()){
                goto master;
                }
                else
                goto exiting;
                break;

            case 2:
                if(!length()){
                goto master;
                }
                else
                goto exiting;
                break;

            case 3:
                if(!area()){
                goto master;
                }
                else
                goto exiting;
                break;

            case 4:
                if(!data()){
                goto master;
                }
                else
                goto exiting;
                break;

            case 5:
                if(!temperature()){
                goto master;
                }
                else
                goto exiting;
                break;

            case 6:
                if(!time()){
                goto master;
                }
                else
                goto exiting;
                break;

            case 7:
                if(!volume()){
                goto master;
                }
                else
                goto exiting;
                break;

            case 8:
                if(!speed()){
                goto master;
                }
                else
                goto exiting;
                break;

            case 9:
            exiting:
                printf("\n**********************************");
                printf("\n*****    EXITING PROGRAM     *****");
                printf("\n*****  THANK YOU FOR USING!  *****");
                printf("\n**********************************\n");
                return 0;

            default:
                printf("\nInvalid option selected.\nTry again. y/n\n--> ");
                scanf(" %c", &temp);
                if(temp=='y')
                break;
                else
                goto exiting;
        }
    }

    return 0;
}

//Mass conversion function.
int mass()
{
    //Variable declarations.

    int choice_in=0, choice_out=0;
    char ch;
    float user_in;
    float grams;
    float result;

    //Variable declarations end.

    //UI Design.

    Options:   //Checkpoint for jump statement.

    printf("\n***************************");
    printf("\n***   MASS CONVERSION   ***");
    printf("\n***************************\n");

    printf("\nChoose input mass unit option.\n");
    printf("\n1. Milligrams \t 2. Grams\n3. Kilograms \t 4. Tons\n\t5. Go back\n\n--> ");
    scanf("%d", &choice_in);//Taking user input choice.

    if(choice_in>5 || choice_in < 1){
    printf("Invalid choice. Try again?  y/n\n-->");
    scanf(" %c", &ch);
    if(ch=='y')
    goto Options;
    else
    return 0;
    }
    else if(choice_in==5)
    return 0;

    Options_out:
    printf("\nChoose output mass unit option.\n");//Taking user output choice.
    printf("\n1. Milligrams \t 2. Grams\n3. Kilograms \t 4. Tons\n\t5. Go back\n\n--> ");
    scanf("%d", &choice_out);

    if(choice_out>5 || choice_out < 1){
    printf("Invalid choice. Try again?  y/n\n-->");
    scanf(" %c", &ch);
    if(ch=='y')
    goto Options_out;
    else
    return 0;
    }
    else if(choice_out==5)
    goto Options;

/************************INPUT PROCESSING************************/
    if(choice_in==1)
    {
        printf("\nEnter value in milligrams.\n--> ");
        scanf("%f", &user_in);
        grams=user_in/1000;
    }
    else if(choice_in==2)
    {
        printf("\nEnter value in grams.\n--> ");
        scanf("%f", &user_in);
        grams=user_in;
    }
    else if(choice_in==3)
    {
        printf("\nEnter value in kilograms.\n--> ");
        scanf("%f", &user_in);
        grams=user_in*1000;
    }
    else if(choice_in==4)
    {
        printf("\nEnter value in tons.\n--> ");
        scanf("%f", &user_in);
        grams=user_in*1000000;
    }
    
/**********************OUTPUT PROCESSING*********************/
    if(choice_out==1)
    {
        printf("\nValue in milligrams.\n");
        result=grams*1000;
        printf("--> %f milligrams\n", result);
    }
    else if(choice_out==2)
    {
        printf("\nValue in grams.\n");
        result=grams;
        printf("--> %f grams\n", result);
    }
    else if(choice_out==3)
    {
        printf("\nValue in kilograms.\n");
        result=grams/1000;
        printf("--> %f kilograms\n", result);
    }
    else if(choice_out==4)
    {
        printf("\nValue in tons.\n");
        result=grams/1000000;
        printf("--> %f tons\n", result);
    }

    printf("\nDo you wish to continue? y/n\n--> ");
    scanf(" %c", &ch);

    if(ch=='y')
    return 0;
    else
    return 1;
}

//Length conversion function.
int length()
{
    // Variable declarations
    int choice_in = 0, choice_out = 0;
    char ch;
    float user_in, meters, result;
    
    // UI Design

    Options: // Checkpoint for jump statement

    printf("\n***************************");
    printf("\n*** LENGTH CONVERSION  ****");
    printf("\n***************************\n");
    
    printf("\nChoose input length unit option.\n");
    printf("\n1. Millimeters \t 2. Centimeters\n3. Meters \t 4. Kilometers\n\t5. Go back\n\n--> ");
    scanf("%d", &choice_in);
    if(choice_in > 5 || choice_in < 1)
    {
        printf("Invalid choice. Try again? y/n\n-->");
        scanf(" %c", &ch);
        if(ch == 'y')
        {
            goto Options;
        }
        else
        {
            return 0;
        }
    }
    else if(choice_in == 5)
    {
        return 0;
    }
    
    Options_out:
    printf("\nChoose output length unit option.\n");
    printf("1. Millimeters \t 2. Centimeters\n3. Meters \t 4. Kilometers\n\t5. Go back\n\n--> ");
    scanf("%d", &choice_out);

    if(choice_out==5)
    goto Options;
    else if (choice_out > 5 || choice_out < 1) {
    printf("Invalid choice. Try again?  y/n\n--> ");
    scanf(" %c", &ch);
    if(ch=='y')
    goto Options_out;
    else
    return 0;
    }
    
    /********************** INPUT PROCESSING **********************/
    if(choice_in == 1)
    {
        printf("\nEnter value in millimeters.\n--> ");
        scanf("%f", &user_in);
        meters = user_in / 1000;
    }
    else if(choice_in == 2)
    {
        printf("\nEnter value in centimeters.\n--> ");
        scanf("%f", &user_in);
        meters = user_in / 100;
    }
    else if(choice_in == 3)
    {
        printf("\nEnter value in meters.\n--> ");
        scanf("%f", &user_in);
        meters = user_in;
    }
    else if(choice_in == 4)
    {
        printf("\nEnter value in kilometers.\n--> ");
        scanf("%f", &user_in);
        meters = user_in * 1000;
    }
    
    /********************* OUTPUT PROCESSING *********************/
    if(choice_out == 1)
    {
        printf("\nValue in millimeters.\n");
        result = meters * 1000;
        printf("--> %f millimeters\n", result);
    }
    else if(choice_out == 2)
    {
        printf("\nValue in centimeters.\n");
        result = meters * 100;
        printf("--> %f centimeters\n", result);
    }
    else if(choice_out == 3)
    {
        printf("\nValue in meters.\n");
        result = meters;
        printf("--> %f meters\n", result);
    }
    else if(choice_out == 4)
    {
        printf("\nValue in kilometers.\n");
        result = meters / 1000;
        printf("--> %f kilometers\n", result);
    }

    printf("\nDo you wish to continue? y/n\n--> ");
    scanf(" %c", &ch);

    if(ch=='y')
    return 0;
    else
    return 1;
}

//Area Conversion function.
int area()
{
    //Variable declarations.

    int choice_in=0, choice_out=0;
    char ch;
    float user_in;
    float sq_mm;
    float result;

    //Variable declarations end.

    //UI Design.

    Options:   //Checkpoint for jump statement.

    printf("\n***************************");
    printf("\n***   AREA CONVERSION   ***");
    printf("\n***************************\n\n");

    printf("Choose input data unit option.\n\n");
    printf("1. Square millimetres\n2. Square centiimetres\n3. Square metres \n4. Square kilometres\n5. Square inches\n6. Square feet\n7. Hectares \n8. Acres\n9. Go back\n\n--> ");
    scanf("%d", &choice_in);//Taking user input choice.
    if(choice_in==9)
    return 0;
    else if(choice_in>9 || choice_in < 1){
    printf("Invalid choice. Try again?  y/n\n-->");
    scanf(" %c", &ch);
    if(ch=='y')
    goto Options;
    else
    return 0;
    }

    Options_out:
    printf("\nChoose output data unit option.\n\n");//Taking user output choice.
    printf("1. Square millimetres\n2. Square centimetres\n3. Square metres\n4. Square kilometres\n5. Square inches\n6. Square feet\n7. Hectares \n8. Acres\n9. Go back\n\n--> ");
    scanf("%d", &choice_out);
    
    if(choice_out==9)
    goto Options;
    else if (choice_out > 9 || choice_out < 1) {
    printf("Invalid choice. Try again?  y/n\n--> ");
    scanf(" %c", &ch);
    if(ch=='y')
    goto Options_out;
    else
    return 0;
    }

/************************INPUT PROCESSING************************/
    if(choice_in==1)
    {
        printf("\nEnter value in Square millimetres.\n--> ");
        scanf("%f", &user_in);
        sq_mm=user_in;
    }
    else if(choice_in==2)
    {
        printf("\nEnter value in Square centimetres.\n--> ");
        scanf("%f", &user_in);
        sq_mm=user_in*100;
    }
    else if(choice_in==3)
    {
        printf("\nEnter value in Square metres.\n--> ");
        scanf("%f", &user_in);
        sq_mm=user_in*1000000;
    }
    else if(choice_in==4)
    {
        printf("\nEnter value in Square kilometres.\n--> ");
        scanf("%f", &user_in);
        sq_mm=user_in*1000000000000;
    }
    else if(choice_in==5)
    {
        printf("\nEnter value in Square inches.\n--> ");
        scanf("%f", &user_in);
        sq_mm=user_in*645.16;
    }
    else if(choice_in==6)
    {
        printf("\nEnter value in Square feet.\n--> ");
        scanf("%f", &user_in);
        sq_mm=user_in*92903.04;
    }
    else if(choice_in==7)
    {
        printf("\nEnter value in Hectares.\n--> ");
        scanf("%f", &user_in);
        sq_mm=user_in*10000000000;
    }
    else if(choice_in==8)
    {
        printf("\nEnter value in Acres.\n--> ");
        scanf("%f", &user_in);
        sq_mm=user_in*4046856422;
    }
    
/**********************OUTPUT PROCESSING*********************/
    if(choice_out==1)
    {
        printf("\nValue in Square millimetres.\n");
        result=sq_mm;
        printf("--> %f Square millimetres\n", result);
    }
    else if(choice_out==2)
    {
        printf("\nValue in Square centimetres.\n");
        result=sq_mm/100;
        printf("--> %f Square centimetres\n", result);
    }
    else if(choice_out==3)
    {
        printf("\nValue in Square metres.\n");
        result=sq_mm/1000000;
        printf("--> %f Square metres\n", result);
    }
    else if(choice_out==4)
    {
        printf("\nValue in Square kilometres.\n");
        result=sq_mm/1000000000000;
        printf("--> %f Square kilometres\n", result);
    }
    else if(choice_out==5)
    {
        printf("\nValue in Square inches.\n");
        result=sq_mm/645.16;
        printf("--> %f Square inches\n", result);
    }
    else if(choice_out==6)
    {
        printf("\nValue in Square feet.\n");
        result=sq_mm/92903.04;
        printf("--> %f Square feet\n", result);
    }
    else if(choice_out==7)
    {
        printf("\nValue in Hectares.\n");
        result=sq_mm/10000000000;
        printf("--> %f Hectares\n", result);
    }
    else if(choice_out==8)
    {
        printf("\nValue in Acres.\n");
        result=sq_mm/4046856422;
        printf("--> %f Acres\n", result);
    }

    printf("\nDo you wish to continue? y/n\n--> ");
    scanf(" %c", &ch);

    if(ch=='y')
    return 0;
    else
    return 1;
}

//Data Conversion function.
int data()
{
    //Variable declarations.

    int choice_in=0, choice_out=0;
    char ch;
    float user_in;
    float bits;
    float result;

    //Variable declarations end.

    //UI Design.

    Options:   //Checkpoint for jump statement.

    printf("\n***************************");
    printf("\n***   DATA CONVERSION   ***");
    printf("\n***************************\n\n");

    printf("Choose input data unit option.\n");
    printf("1. Bits \t 2. Bytes\n3. Kilobytes \t 4. Megabytes\n5. Gigabytes \t 6. Terabytes\n7. Petabytes \t 8. Exabytes\n\t9. Go back\n\n--> ");
    scanf("%d", &choice_in);//Taking user input choice.
    if(choice_in>9 || choice_in < 1){
    printf("Invalid choice. Try again?  y/n\n-->");
    scanf(" %c", &ch);
    if(ch=='y')
    goto Options;
    else
    return 0;
    }
    else if(choice_in==9)
    return 0;

    Options_out:
    printf("\nChoose output data unit option.\n");//Taking user output choice.
    printf("1. Bits \t 2. Bytes\n3. Kilobytes \t 4. Megabytes\n5. Gigabytes \t 6. Terabytes\n7. Petabytes \t 8. Exabytes\n\t9. Go back\n--> ");
    scanf("%d", &choice_out);

    if (choice_out==9)
    goto Options;
    else if (choice_out > 9 || choice_out < 1) {
    printf("Invalid choice. Try again?  y/n\n--> ");
    scanf(" %c", &ch);
    if(ch=='y')
    goto Options_out;
    else
    return 0;
    }

/************************INPUT PROCESSING************************/
    if(choice_in==1)
    {
        printf("\nEnter value in bits.\n--> ");
        scanf("%f", &user_in);
        bits=user_in;
    }
    else if(choice_in==2)
    {
        printf("\nEnter value in Bytes.\n--> ");
        scanf("%f", &user_in);
        bits=user_in*8;
    }
    else if(choice_in==3)
    {
        printf("\nEnter value in Kilobytes.\n--> ");
        scanf("%f", &user_in);
        bits=user_in*8192;
    }
    else if(choice_in==4)
    {
        printf("\nEnter value in Megabytes.\n--> ");
        scanf("%f", &user_in);
        bits=user_in*8388608;
    }
    else if(choice_in==5)
    {
        printf("\nEnter value in Gigabytes.\n--> ");
        scanf("%f", &user_in);
        bits=user_in*8589934592UL;
    }
    else if(choice_in==6)
    {
        printf("\nEnter value in Terabytes.\n--> ");
        scanf("%f", &user_in);
        bits=user_in*8796093022208UL;
    }
    else if(choice_in==7)
    {
        printf("\nEnter value in Petabytes.\n--> ");
        scanf("%f", &user_in);
        bits=user_in*9007199254740992UL;
    }
    else if(choice_in==8)
    {
        printf("\nEnter value in Exabytes.\n--> ");
        scanf("%f", &user_in);
        bits=user_in*9223372036854775808UL;
    }
    
/**********************OUTPUT PROCESSING*********************/
    if(choice_out==1)
    {
        printf("\nValue in bits.\n");
        result=bits;
        printf("--> %f bits\n", result);
    }
    else if(choice_out==2)
    {
        printf("\nValue in Bytes.\n");
        result=bits/8;
        printf("--> %f Bytes\n", result);
    }
    else if(choice_out==3)
    {
        printf("\nValue in Kilobytes.\n");
        result=bits/8192;
        printf("--> %f Kilobytes\n", result);
    }
    else if(choice_out==4)
    {
        printf("\nValue in Megabytes.\n");
        result=bits/8388608;
        printf("--> %f Megabytes\n", result);
    }
    else if(choice_out==5)
    {
        printf("\nValue in Gigabytes.\n");
        result=bits/8589934592UL;
        printf("--> %f Gigabytes\n", result);
    }
    else if(choice_out==6)
    {
        printf("\nValue in Terabytes.\n");
        result=bits/8796093022208UL;
        printf("--> %f Terabytes\n", result);
    }
    else if(choice_out==7)
    {
        printf("\nValue in Petabytes.\n");
        result=bits/9007199254740992UL;
        printf("--> %f Petabytes\n", result);
    }
    else if(choice_out==8)
    {
        printf("\nValue in Exabytes.\n");
        result=bits/9223372036854775808UL;
        printf("--> %f Exabytes\n", result);
    }

    printf("\nDo you wish to continue? y/n\n--> ");
    scanf(" %c", &ch);

    if(ch=='y')
    return 0;
    else
    return 1;
}

//Temperature Conversion function.
int temperature() {
    int choice;
    float temperature, result;
    char ch;

    Options:
    
    printf("\n******************************");
    printf("\n*** TEMPERATURE CONVERSION ***");
    printf("\n******************************\n\n");
    
    printf("Choose conversion option:\n\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Go back\n--> ");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
            printf("\nEnter temperature value: ");
            scanf("%f", &temperature);
            result = convertToFahrenheit(temperature);
            printf("%.2f Celsius = %.2f Fahrenheit\n", temperature, result);
            break;
        case 2:
            printf("\nEnter temperature value: ");
            scanf("%f", &temperature);
            result = convertToCelsius(temperature);
            printf("%.2f Fahrenheit = %.2f Celsius\n", temperature, result);
            break;
        case 3:
            return 0;
            break;
        default:
            printf("Invalid choice. Try again. y/n\n");
            scanf(" %c", &ch);
            if(ch=='y')
            goto Options;
            else
            return 0;
            break;
    }

    printf("\nDo you wish to continue? y/n\n--> ");
    scanf(" %c", &ch);

    if(ch=='y')
    return 0;
    else
    return 1;
}

//Time Conversion function.
int time() {
    int choice_in = 0, choice_out = 0;
    char ch;
    float user_in, seconds, result;

    Options: //Checkpoint for goto statement.

    printf("\n***************************");
    printf("\n***   TIME CONVERSION   ***");
    printf("\n***************************\n\n");

    printf("Choose input time unit option.\n");
    printf("\n1. Seconds \t 2. Minutes\n3. Hours \t 4. Days\n\t5. Go back\n\n--> ");
    scanf("%d", &choice_in);

    if (choice_in > 5 || choice_in < 1) {
        printf("Invalid choice. Try again?  y/n\n-->");
        scanf(" %c", &ch);
        if (ch == 'y')
            goto Options;
        else
            return 0;
    } else if (choice_in == 5)
        return 0;

    Options_out: //Checkpoint for goto statement.

    printf("\nChoose output time unit option.\n");
    printf("1. Seconds \t 2. Minutes\n3. Hours \t 4. Days\n\t5. Go back\n\n--> ");
    scanf("%d", &choice_out);

    if (choice_out > 5 || choice_in < 1) {
        printf("Invalid choice. Try again?  y/n\n--> ");
        scanf(" %c", &ch);
        if (ch == 'y')
            goto Options_out;
        else
            return 0;
    } else if (choice_out == 5)
        goto Options;

    printf("\nEnter value in %s.\n--> ", choice_in == 1 ? "seconds" : choice_in == 2 ? "minutes" : choice_in == 3 ? "hours" : "days");
    scanf("%f", &user_in);

    if (choice_in == 1)
        seconds = user_in;
    else if (choice_in == 2)
        seconds = user_in * 60;
    else if (choice_in == 3)
        seconds = user_in * 3600;
    else
        seconds = user_in * 86400;

    if (choice_out == 1) {
        printf("\nValue in seconds.\n");
        result = seconds;
        printf("--> %f seconds\n", result);
    } else if (choice_out == 2) {
        printf("\nValue in minutes.\n");
        result = seconds / 60;
        printf("--> %f minutes\n", result);
    } else if (choice_out == 3) {
        printf("\nValue in hours.\n");
        result = seconds / 3600;
        printf("--> %f hours\n", result);
    } else {
        printf("\nValue in days.\n");
        result = seconds / 86400;
        printf("--> %f days\n", result);
    }

    printf("\nDo you wish to continue? y/n\n--> ");
    scanf(" %c", &ch);

    if(ch=='y')
    return 0;
    else
    return 1;
}

//Volume conversion function
int volume()
{
    //Variable declarations.

    int choice_in=0, choice_out=0;
    char ch;
    float user_in;
    float ml;
    float result;

    //Variable declarations end.

    //UI Design.

    Options:   //Checkpoint for jump statement.

    printf("\n***************************");
    printf("\n***  VOLUME CONVERSION  ***");
    printf("\n***************************\n\n");

    printf("\nChoose input data unit option.\n\n");
    printf("1. Millilitres\n2. Litres\n3. Cubic centimetres\n4. Cubic metres\n5. Gallons(US)\n6. Ounces(US)\n7. Go back\n\n--> ");
    scanf("%d", &choice_in);//Taking user input choice.
    if(choice_in==7)
    return 0;
    else if(choice_in>7 || choice_in < 1){
    printf("Invalid choice. Try again?  y/n\n-->");
    scanf(" %c", &ch);
    if(ch=='y')
    goto Options;
    else
    return 0;
    }

    Options_out:
    printf("\nChoose output data unit option.\n\n");//Taking user output choice.
    printf("1. Millilitres\n2. Litres\n3. Cubic centimetres\n4. Cubic metres\n5. Gallons(US)\n6. Ounces(US)\n7. Go back\n\n--> ");
    scanf("%d", &choice_out);
    
    if(choice_out==7)
    goto Options;
    else if (choice_out > 7 || choice_out < 1) {
    printf("Invalid choice. Try again?  y/n\n--> ");
    scanf(" %c", &ch);
    if(ch=='y')
    goto Options_out;
    else
    return 0;
    }

/************************INPUT PROCESSING************************/
    if(choice_in==1)
    {
        printf("\nEnter value in Millilitres.\n--> ");
        scanf("%f", &user_in);
        ml=user_in;
    }
    else if(choice_in==2)
    {
        printf("\nEnter value in Litres.\n--> ");
        scanf("%f", &user_in);
        ml=user_in*1000;
    }
    else if(choice_in==3)
    {
        printf("\nEnter value in Cubic centimetres.\n--> ");
        scanf("%f", &user_in);
        ml=user_in;
    }
    else if(choice_in==4)
    {
        printf("\nEnter value in Cubic metres.\n--> ");
        scanf("%f", &user_in);
        ml=user_in*1000000;
    }
    else if(choice_in==5)
    {
        printf("\nEnter value in Gallons(US).\n--> ");
        scanf("%f", &user_in);
        ml=user_in*3,785.412;
    }
    else if(choice_in==6)
    {
        printf("\nEnter value in Ounces(US).\n--> ");
        scanf("%f", &user_in);
        ml=user_in*29.57353;
    }
    
/**********************OUTPUT PROCESSING*********************/
    if(choice_out==1)
    {
        printf("\nValue in Millilitres.\n");
        result=ml;
        printf("--> %f Millilitres\n", result);
    }
    else if(choice_out==2)
    {
        printf("\nValue in Litres.\n");
        result=ml/1000;
        printf("--> %f Litres\n", result);
    }
    else if(choice_out==3)
    {
        printf("\nValue in Cubic centimetres.\n");
        result=ml;
        printf("--> %f Cubic centimetres\n", result);
    }
    else if(choice_out==4)
    {
        printf("\nValue in Cubic metres.\n");
        result=ml/1000000;
        printf("--> %f Cubic metres\n", result);
    }
    else if(choice_out==5)
    {
        printf("\nValue in Gallons(US).\n");
        result=ml/3,785.412;
        printf("--> %f Gallons(US)\n", result);
    }
    else if(choice_out==6)
    {
        printf("\nValue in Ounces(US).\n");
        result=ml/29.57353;
        printf("--> %f Ounces(US)\n", result);
    }

    printf("\nDo you wish to continue? y/n\n--> ");
    scanf(" %c", &ch);

    if(ch=='y')
    return 0;
    else
    return 1;
}

//Speed conversion function
int speed()
{
     //Variable declarations.

    int choice_in=0, choice_out=0;
    char ch;
    float user_in;
    float cmps;
    float result;

    //Variable declarations end.

    //UI Design.

    Options:   //Checkpoint for jump statement.

    printf("\n***************************");
    printf("\n***  SPEED CONVERSION  ****");
    printf("\n***************************\n\n");

    printf("\nChoose input data unit option.\n\n");
    printf("1. Centimetres per second\n2. Metres per second\n3. Kilometres per hour\n4. Miles per hour\n5. Knots\n6. Mach\n7. Go back\n\n--> ");
    scanf("%d", &choice_in);//Taking user input choice.
    if(choice_in==7)
    return 0;
    else if(choice_in>7 || choice_in < 1){
    printf("Invalid choice. Try again?  y/n\n-->");
    scanf(" %c", &ch);
    if(ch=='y')
    goto Options;
    else
    return 0;
    }

    Options_out:
    printf("\nChoose output data unit option.\n\n");//Taking user output choice.
    printf("1. Centimetres per second\n2. Metres per second\n3. Kilometres per hour\n4. Miles per hour\n5. Knots\n6. Mach\n7. Go back\n\n--> ");
    scanf("%d", &choice_out);
    
    if(choice_out==7)
    goto Options;
    else if (choice_out > 7 || choice_out < 1) {
    printf("Invalid choice. Try again?  y/n\n--> ");
    scanf(" %c", &ch);
    if(ch=='y')
    goto Options_out;
    else
    return 0;
    }

/************************INPUT PROCESSING************************/
    if(choice_in==1)
    {
        printf("\nEnter value in Centimetres per second.\n--> ");
        scanf("%f", &user_in);
        cmps=user_in;
    }
    else if(choice_in==2)
    {
        printf("\nEnter value in Metres per second.\n--> ");
        scanf("%f", &user_in);
        cmps=user_in*100;
    }
    else if(choice_in==3)
    {
        printf("\nEnter value in Kilometres per hour.\n--> ");
        scanf("%f", &user_in);
        cmps=user_in*27.7777778;
    }
    else if(choice_in==4)
    {
        printf("\nEnter value in Miles per hour.\n--> ");
        scanf("%f", &user_in);
        cmps=user_in*44.7;
    }
    else if(choice_in==5)
    {
        printf("\nEnter value in Knots.\n--> ");
        scanf("%f", &user_in);
        cmps=user_in*51.44;
    }
    else if(choice_in==6)
    {
        printf("\nEnter value in Mach.\n--> ");
        scanf("%f", &user_in);
        cmps=user_in*34030;
    }
    
/**********************OUTPUT PROCESSING*********************/
    if(choice_out==1)
    {
        printf("\nValue in Centimetres per second.\n");
        result=cmps;
        printf("--> %f Centimetres per second\n", result);
    }
    else if(choice_out==2)
    {
        printf("\nValue in Metres per second.\n");
        result=cmps/100;
        printf("--> %f Metres per second\n", result);
    }
    else if(choice_out==3)
    {
        printf("\nValue in Kilometres per hour.\n");
        result=cmps/27.7777778;
        printf("--> %f Kilometres per hour\n", result);
    }
    else if(choice_out==4)
    {
        printf("\nValue in Miles per hour.\n");
        result=cmps/44.7;
        printf("--> %f Miles per hour\n", result);
    }
    else if(choice_out==5)
    {
        printf("\nValue in Knots.\n");
        result=cmps/51.44;
        printf("--> %f Knots\n", result);
    }
    else if(choice_out==6)
    {
        printf("\nValue in Mach.\n");
        result=cmps/34030;
        printf("--> %f Mach\n", result);
    }

    printf("\nDo you wish to continue? y/n\n--> ");
    scanf(" %c", &ch);

    if(ch=='y')
    return 0;
    else
    return 1;
}