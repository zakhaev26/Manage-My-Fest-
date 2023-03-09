#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>
#define ENTER 13
#define TAB 9
#define BCKSPC 8

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

void takeinput(char ch[40])
{
    fgets(ch, 40, stdin);
    ch[strlen(ch) - 1] = 0;
}
void authendesign(void)
{
    printf("\n******************************************************************************************************************************\n");
    printf("\n\t\t\t\t\t\t\tAUTHENTICATE\t\t\t\t\t\n");
    printf("\t\t\t\t\t   **Welcome to \"FEST MANAGEMENT\" Services !**\n");
    printf("\t\t\t\t\t  Advaita is being held from 2nd-5th of March\n\n");

    printf("******************************************************************************************************************************\n");
}
char generateusername(char phone[40], char username[40],char email[40])
{
    
    int i;
    char temp[40];
    for(i=0;email[i]!='@';i++){
        username[i]=email[i];
    }
    for(int j=0;j<2;j++){
         temp[j]=phone[j];
    }
    strcat(username,temp);
    
    
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
    char re;
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
        generateusername(user.phone, user.username,user.email);
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

    fp = fopen("Users.dat", "r");
    while (fread(&usr, sizeof(users), 1, fp))
    {
        if (!strcmp(usr.username, uname))
        {
            if (!strcmp(usr.password, pword))
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
    else
    {
        printf("\t\t\t\t\t\t\t\"SEE YOU SOON IN ADVAITA\":)");
        return 0;
    }

    return 0;
}