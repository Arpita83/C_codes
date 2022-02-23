// 10. Write a program to compute F(n,r) where F(n,r) can be recursively defined as F(n,r)= F(n-1, r)+F(n-1, r-1)

#include <stdio.h>

// Function definitation

int reccurence(int n, int r){
    if(r>n){                            //  Impossible case i.e. this type of input is invalid.        
        return 0;
    }
    if(r==0 || r==n){                                       // Base Case for termination of function.
        return 1;
    }
    return reccurence(n-1,r) + reccurence(n-1,r-1);         // Using reccurence here.
}

// Main program

int main()
{
    int n,r;
    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);
    printf("%d", reccurence(n,r));

    return 0;
}

