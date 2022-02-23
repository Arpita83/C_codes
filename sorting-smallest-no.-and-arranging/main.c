/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[5] = {5,3,2,4,1};
    for(int i = 0;i<5;i++){
        int small=1000,index;
        for(int j=i;j<5;j++){
            if(a[j]<small){
                small=a[j];
                index=j;
            }
        }
        int temp=a[i];
        a[i] = a[index];
        a[index] = temp;
    }
    for(int i = 0;i<5;i++){
        printf("%d ",a[i]);
    }
    

    return 0;
}

