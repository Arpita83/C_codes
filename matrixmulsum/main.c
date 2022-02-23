/* 3) Program to find the sum and product of two 2×2 matrices and display it.*/

#include <stdio.h>

int main()
{
    int a[2][2], b[2][2],sum[2][2],mul[2][2];      // Initialising the matrix.
    printf("Enter the values of matrix a: \n");
    for(int i = 0;i<2;i++){                   // Nested loop for taking matrix_a values.
        for(int j = 0;j<2;j++){
            scanf("%d ",&a[i][j]);
        }
    }
    printf("Enter the values of matrix b: \n");
    for(int i = 0;i<2;i++){                   // Nested loop for taking matrix_b values.
        for(int j = 0;j<2;j++){
            scanf("%d ",&b[i][j]);
        }
    }
                                             // adding two matrices
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    
    // Printing the sum
    printf("\nThe sum of matrices is: \n");
    for(int i = 0;i<2;i++){                   // Nested loop for printing sum of matrices.
        for(int j = 0;j<2;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    
    // Multiplying two matrices 
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++) {
            mul[i][j] = a[i][i]*b[i][j] + a[i][j]*b[j][j];
        }
    }
    // Printing the product.
    printf("\nThe product of matrices is: \n");
    for(int i = 0;i<2;i++){                       // Nested loop for printing product of values.
        for(int j = 0;j<2;j++){
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}



