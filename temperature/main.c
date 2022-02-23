/* 2) Program to store temperature of two cities of a week and display it. */

#include <stdio.h>

int main()
{
    int city_a[7],city_b[7];
    printf("Temperature of city_a: \n");
    for(int i =0;i<7;i++){
        scanf("%d",&city_a[i]);
    }
    printf("Temperature of city_b: \n");
    for(int i =0;i<7;i++){
        scanf("%d",&city_b[i]);
    }
    
    printf("\n\nTemperature of city_a: ");
    for(int i=0;i<7;i++){
        printf("%d ",city_a[i]);
    }
    printf("\n");
    printf("Temperature of city_b: ");
    for(int i=0;i<7;i++){
        printf("%d ",city_b[i]);
    }
    
    
    return 0;
}


