// 
#include<stdio.h>
#include<stdlib.h>
char username(char username[40], char email[40])
{

    int i;
    for (i = 0; email[i] != '@'; i++)
    {
        username[i] = email[i];
    }
    
}
int main(){
    char user[40], email[40],temp[40];
    printf("Enter your name: ");
    scanf("%s", user);
    printf("Enter your email: ");
    scanf("%s", email);
    



return 0;
}