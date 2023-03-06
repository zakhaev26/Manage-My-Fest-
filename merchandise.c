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
int main() {
    Merchandise();
    return 0;
}
