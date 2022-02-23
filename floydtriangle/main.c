

/* 3. Write a program to print the Floyd’s triangle. */

#include <stdio.h>
int main()
{
  int n, a = 1;

  printf("Enter the number of rows of Floyd's triangle to print: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++){                 // First loop determines how many natural numbers to be printed verticaly
    for (int j = 1; j <= i; j++){    
      printf("%d ", a);            //Second loop determines how many natural numbers to be printed horizonaly by adding 1 toeach digit
      a++;
    }
    printf("\n");
  }

  return 0;
}
