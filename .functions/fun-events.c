//
//  Fun Events.c
//  iprog project
//
//  Created by Narayan Samal on 27/02/23.
//

#include <stdio.h>
int Funevent(int a){
    int event;
    int price;
    int age;
    char conformation;
    
    printf("Hello!\nWelcome to the funzone where you would experience exotic events.\nPlease fill up the followings.\n");
    printf("Please enter your age: ");
    scanf("%d", &age);
    
    if(age < 18){
        
        printf("Age requirment is 18+ to participate in any event\n");
        printf("Thank you 😊\n");
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
int main(int argc, const char * argv[]) {
    Funevent(1);
    return 0;
}
