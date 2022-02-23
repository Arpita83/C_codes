/* 7. Write a program to generate the following pattern:
$ * * * $
* $ $ *
* $ *
* $ $ *
$ * * * $  */

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j==i || j==n-1-i){
                printf("$ ");
            }
            else if((i==0 || i==n-1) && j>0 && j<n-1){
                printf("* ");
            }
            else if(i>0 && i<n-1 && (j==0 || j==n-1)){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}