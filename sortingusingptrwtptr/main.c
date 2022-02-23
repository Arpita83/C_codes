/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


/* 4) Program to find the largest and smallest element in an array
         a) without using a pointer     b) using pointer */

#include <stdio.h>

int main()
{
    int a[5] = {5,3,2,4,1};
   
        /* ---Without pointers---*/
    // Using nested loop to find the largest value by comparing.
    for(int i=0;i<5;i++){
        int index,large=0;
        for(int j=i;j<5;j++){
            if(a[j]>large){
                large=a[j];
                index=j;
            }
        }
    // Swaping and arranging the elements in descending order one by one
        int temp=a[i];
        a[i] = a[index];
        a[index] = temp;
    }
    printf("Without Pointers:\n");    
    //Printing the sorted array.
    for(int i = 0;i<5;i++){
        printf("%d ",a[i]);
    }
    // Printing the smallest and largest value.
    printf("\nSmallest number is: %d\n",a[4]);
    printf("Largest number is: %d \n\n",a[0]);
    
    
    // -----Using Pointers.-----//
    
    // Using nested loop to find the largest value by comparing.
    for(int i=0;i<5;i++){
        int index,large=0;
        for(int j=i;j<5;j++){
            if(*(a+j)>large){
                large=*(a+j);
                index=j;
            }
        }
    // Swaping and arranging the elements in descending order one by one
        int temp=*(a+i);
        *(a+i) = a[index];
        a[index] = temp;
    }
     printf("Using Pointers:\n");  
    //Printing the sorted array.
    for(int i = 0;i<5;i++){
        printf("%d ",*(a+i));
    }
    // Printing the smallest and largest value.
    printf("\nSmallest number is: %d\n",a[4]);
    printf("Largest number is: %d",a[0]);
    
    

    return 0;
}

