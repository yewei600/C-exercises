#include <stdio.h>
#include <stdlib.h>


/* Write an alternate version of squeeze(s1,s2) that deletes each character in the string s1
   that matches any character in the string s2 . */



void
squeeze(char s[], char t[]) {
    int i, j, k;
    for (k = 0; t[k] != '\0'; k++) {
        for (i = j = 0; s[i] != '\0'; i++)
            if (s[i] != t[k])
                s[j++] = s[i];
        s[j] = '\0';
    }
}


int main()
{
    char s[]="applecomputer";
    char t[]="apple";

    printf("The 2 original strings are 1)%s  2)%s\n",s,t);
    squeeze(s,t);
    printf("delete s aginst t gives %s",s);
    return 0;
}
