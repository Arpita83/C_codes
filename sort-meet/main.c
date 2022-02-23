/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[10],b[10],c[20];

 int i,n1,n2,k,j;

 printf("Enter size of array 1 : ");
 scanf("%d",&n1);

 for(i=0;i<n1;i++)
    {
      scanf("%d",&a[i]);
    }

 printf("Enter size of array 2 : ");
 scanf("%d",&n2);

 for(i=0;i<n2;i++)
    {
      scanf("%d",&b[i]);
    }


  for(i=0,j=0,k=0;i<n1 && -j<n2;k++)
  {
    if(a[i]<b[j])
    {
      c[k]=a[i];
      i++;
    }
    else if(a[i]>b[j])
    {
     c[k]=b[j];
     j++;
    }
    else{
        c[k] = a[i];
        i++; j++;
    }
  }

  while(i<n1)
  {
   c[k]=a[i];
   k++;
   i++;
  }

  while(j<n2)
  {
   c[k]=b[j];
   k++;
   j++;
  }

  for(i=0;i<k;i++)
    {
      printf("%d ",c[i]);
    }
 return 0;
}



