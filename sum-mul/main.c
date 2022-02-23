/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int matrix1[10][10], matrix2[10][10];
    static int result[10][10];
    printf("Enter the elements of M1:\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("Enter the elements of M2:\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&matrix2[i][j]);
        }
    }

    //loop for addition of matrices
    for (int i=0;i<2;i++)
        {
          for(int j=0;j<2;j++)
          {
            result[i][j]=matrix1[i][j]+matrix2[i][j];
          }
        }

    // loop for printing the final matrix
    printf("The Sum of matrices is: \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }
    //loop for product
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            result[i][j]=matrix1[i][j]*matrix2[j][i]+matrix1[i][j+1]*matrix2[j+1][i];
        }
    }
    printf("The product of matrix is: \n");
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++){
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }
 return 0;
}