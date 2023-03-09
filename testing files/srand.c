#include <stdio.h>
#include <stdlib.h>
#include<string.h>
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
int main()
{
    char temp[40]="naba@gmail.com";
    char temp2[11]="9437380952";
    char username[40];
    generateusername(temp2, username,temp);
    printf("\n\nUser resgistration success, Your username is %s", username);

    
    return 0;
}