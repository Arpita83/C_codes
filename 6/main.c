// 6. Write a program to determine whether entered number is a perfect number or not.

# include <stdio.h>   

int main()   
{   
   int n, sum = 0;
   printf("Number you want to check: ");
   scanf("%d", &n);
   for(int i=1; i<n;i++){
       if(n%i==0){
           sum = sum + i;                               // Finding the divisors and adding them to check the condition.
       }
   }
   if(sum==n){
       printf("%d is a perfect number.", n);            // Perfect number is a number which is equal to sum of its divisor.
   }
   else{
       printf("%d is not a perfect number.", n);
   }
    return 0;   
}



