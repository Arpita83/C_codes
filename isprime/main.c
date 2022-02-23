/* 9 Write a function isprime that returns 1 if the argument passed to it is a prime number and a 0
otherwise. */
#include <stdio.h>

int isprime(int n);             
int main()
{
    int a;
    scanf("%d", &a);
    if(isprime(a)==0){
        printf("Number is not prime.");
    }
    else{
       printf("Number is prime."); 
    }
    return 0;
}


int isprime(int n){                     // Defining the function isprime. //
    for(int i=2; i<n;i++){             // For loop to check: If the num is divisible by 2 or  greater num
       if(n%i==0){                     // then it means num is having more than two factors(1,num itself).
           return 0;
       }
   }
   return 1;
}
