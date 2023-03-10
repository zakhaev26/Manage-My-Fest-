
#include <stdio.h>

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

int main()
{
    menuMain();
    return 0;
}
