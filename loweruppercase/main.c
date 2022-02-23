/* 12. Write a program using pointer variables to read a character until * is entered. If the
character is in upper case, print it in lower case and vice versa. Also count the number of
upper and lower case characters entered. */

#include <stdio.h>
#include <ctype.h>


int main()
{
    char *ptr;
    char c;
    ptr = &c;

    int uc=0, lc=0;
    while(1){               // Using while loop to run the program. // Used (1) for true condition always(infinite loop).
    scanf("%c", &c);
        if(c=='*'){                         // Terminating conditioni.e. if * appears it stops reading.
            break;
        }
        
        if(islower(*ptr)){
            printf("To upper %c\n", toupper(*ptr));             // Lower to uppercase
            lc++;                                               // Counting lowercase 
        }https://www.onlinegdb.com/edit/WSdYKVNKk#tab-stdin
        else if(isupper(*ptr)){
            printf("To lower %c\n", tolower(*ptr));             // Upper to lowercase
            uc++;                                               // Counting uppercase    
        }
        
    }
    printf("Total uppercase letters: %d and Total lowercase letters: %d", uc, lc);
    return 0;
}
