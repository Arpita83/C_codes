/* 11.Write a recursive function for tower of hanoi problem.*/

#include <stdio.h>

void towerOfHanoi(int n, char from, char to, char help){                    // Defining function towerOfHanoi here.
    if(n!=0){
        towerOfHanoi(n - 1, from, help, to);
        printf("Move disk %d from rod %c to rod %c\n", n, from, to);
        towerOfHanoi(n - 1, help, to, from);
    }
}

    /*Tower of Hanoi is a mathematical puzzle where we have three rods and n disks. The objective of the puzzle is to move the entire stack to
     another rod, obeying some simple rules Hence I've made this program in consideration withose rules.*/
     
    int main()
{
    int n;                                      
    scanf("%d", &n);
    towerOfHanoi(n, 'A', 'B', 'C');
    return 0;
}

