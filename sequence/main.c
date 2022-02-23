/*8. Write a program to implement the following sequence of numbers.: */

#include <stdio.h>

int main()
{
   int a = 1,l,n;
   printf("Last number of cube of sequence: ");
   scanf("%d", &l);
   for( a = 1;a<=l;a++){
       n = a*a*a;
       printf("%d  ",n);            // Here I'm using loop to cube the number and print the sequence. 
   }
    return 0;
}

