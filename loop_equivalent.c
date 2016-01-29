#include <stdio.h>
#include <stdlib.h>


/* Write a loop equivalent to the for loop above without using && or ||*/

#define lim 5

int main()
{
    int i;
    char c;
    char s[5];
    while(i<lim-1){
        c = getchar();
        if(c != '\n'){
            if(c != EOF){
                s[i]= c;
            }
        }
        i++;
    }
    s[i]='\0';

    return 0;
}
