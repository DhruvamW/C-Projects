#include <stdio.h>
#include <string.h>
 int main(){
    char item[50]="";
    float price= 0.0f;
    int qty=0;
    float total = 0.0f;
    int number=0;

    printf("Enter number of items in the cart: ");
    scanf("%d", &number);
    

    for (int i=0; i<number; i++){
        getchar();
        printf("Enter Item name: ");
        fgets(item, sizeof(item), stdin);
        item[strlen(item)-1]='\0';
        printf("Enter Item price: ");
        scanf("%f", &price);
        printf("Enter Item quantity: ");
        scanf("%d", &qty);
        printf("Total of Item %d: %.2f \n", i+1, price*qty);
        total += price * qty;
    }

    printf("Total of Shopping Cart is: %.2f", total);

    return 0;
    
 }