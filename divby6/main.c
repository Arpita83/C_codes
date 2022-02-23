/* 5.Write a program that display all the numbers from 1 to 100 that are not divisible by 2 as
well as by 3. */

#include<stdio.h>
int main()
{   int i;
    for(i = 1; i <= 100; i++) {       // Using for loop to perfotm the task by giving condition and incrementing the value.
    if (i % 6 != 0)                         // This condition is true whenever i is not divisible by number 2 and 3
    printf("%d ", i);
    }
 return 0;
}



