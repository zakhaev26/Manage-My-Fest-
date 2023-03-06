//
//  Fun Events.c
//  iprog project
//
//  Created by Narayan Samal on 27/02/23.
//

#include <stdio.h>
int Funevent(){
    char event[50];
    int age;
    printf("Please enter your age: ");
    scanf("%d", &age);
    if(age < 18){
        printf("Age requirment is 18+ to participate in any event\n");
        printf("Thank you 😊\n");
        printf("See you next year.👋🏻\n");
    }
    else{
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
int main() {
    Funevent();
    return 0;
}

