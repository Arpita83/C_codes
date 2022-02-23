/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num[11];
   int i,sum=0;

   printf("Enter your numbers:");
   //reading values into array elements
   for(i=0;i<10; i++)       
   {        scanf("%d",&num[i]);        
   }
   //computating the total 
   for(i=0;i<10; i++){
       sum= sum+ num[i];       
   }
    //the average is sum/n
     float avg = sum/10;

     //printing the value of average
   printf("Average of 10 numbers are %f", avg);

}


