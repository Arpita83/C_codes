#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int atoi(char *a){
    int b=0;
    bool neg = false;
    for(int i=0;i<strlen(a);i++){
        if(a[i]=='-'){
            neg = true;
            continue;
        }
        b=b*10 + a[i] - '0';
    }
    if (neg){
        return -1*b;
    }
    return b;
}
int main(){
    int a[100],b[100];
    int i;
    char s1[101],s2[101];
    
    printf("Enter no.1 : ");
    scanf(" %s",s1);
    printf("\nEnter no. 2: ");
    scanf(" %s",s2);
    printf("%d", atoi(s1)*atoi(s2));
    return 0;
}