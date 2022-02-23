
/* 4.Write a program to display the sin(x), cos(x) and tan(x) value where x ranges from 0 to
360 in steps of 15.*/

#include <stdio.h>
#include <math.h>

int main()
{
    for(int i=0; i<=360; i+=15){
        printf("For x = %d, sin(x) = %.2f cos(x) = %.2f tan(x) = %.2f\n", i, sin(i), cos(i), tan(i));
    }

    return 0;
}