//
//  merchandise.c
//  iprog project
//
//  Created by Narayan Samal on 27/02/23.
//

#include <stdio.h>
#include <string.h>

int Merchandise(){
    typedef struct {
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
    switch(merchno){
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
    switch(Size){
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
    
    switch(merchno){
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
    scanf("%s",&conformation);
    
    if(conformation == 'y'){
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
int main(int argc, const char * argv[]) {
    Merchandise();
    return 0;
}
