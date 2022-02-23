/* 1) Initialize an array with 10 elements and print those and find the average of all those elements .*/

#include<stdio.h>

int main(){
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