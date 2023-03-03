#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#define ENTER 13
#define TAB 9
#define BCKSPC 8

void takeinput(char ch[40])
{
    fgets(ch, 40, stdin);
    ch[strlen(ch) - 1] = 0;
}
void authendesign(void)
{
    printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    char aut[30] = "AUTHENTICATE\n";
    printf("%50s", aut);
    printf("  \t\t\t\tWELCOME TO OUR FEST TERMINAL\n");

    printf("----------------------------------------------------------------------------------------\n");
}

char generateusername(char email[50], char username[50])
{

    for (int i = 0; i < strlen(email); i++)
    {
        if (email[i] == '@')
            break;
        else
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
struct user
{
    char name[40];
    char password[40];
    char username[40];
    char email[40];
    int phone[10];
};
void regis()
{
    FILE *f;
    char password2[40];
    struct user user;
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
        generateusername(user.email, user.username);
        f = fopen("Users.dat", "a+");
        fwrite(&user, sizeof(struct user), 1, f);
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
void login()
{
    FILE *fp;
    int count = 0;
    char uname[40];
    char pword[40];
    struct user usr;

    printf("\nEnter your username:\t");
    takeinput(uname);
    printf("Enter your password:\t");
    takepassword(pword);

    fp = fopen("Users.dat", "r");
    while (fread(&usr, sizeof(struct user), 1, fp))
    {
        if (!strcmp(usr.username, uname))
        {
            if (!strcmp(usr.password, pword))
            {
                
                printf("\nWelcome %s", usr.username);
                
            }
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
int main()
{
    authendesign();
    
    int opt, count = 0;

    printf("\nPlease Choose Your Operation:-");
    printf("\n1. Signup");
    printf("\t 2. Login");
    printf("\t 3. Exit");

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