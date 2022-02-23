/* 1. Write a program to prepare a grocery bill. For that enter the name of the items purchased,
quantity and price per unit. */

#include <stdio.h>
#include <conio.h>


int main()
{
    char *item;
    int q, p, a, ta=0;
    item = malloc(256);                         // Here I used malloc for dynamic memory allocation.
    printf("**********BILL**********\n\n");
    printf("Item    Quantity     Price   Amount\n");
    int br = 1;
    while(br == 1){                         // Here I used while loop to scan the input and to get amount and total amount.
        scanf("%s%d%d", item, &q, &p);
        a = q*p;
        ta += a;
        
        printf("%s          %d            %d            %d\n", item, q, p, a);
        
        scanf("%d", &br);
    }
    printf("________________________\n");
    printf("Total amount to be paid         %d\n", ta);
    printf("________________________\n");    
    
    return 0;
}

