#include <stdio.h>
#include <stdlib.h>


/*converts characters like newline and tab into visible escape sequences like \n and \t as it copies
the string t to s. Use a switch. Write a function for the other direction as well, converting escape
sequences into the real characters.
*/

void escape(char s[],char t[]){
    int i=0;
    while(s[i]!='\0'){
        switch (s[i]){
        case '\n':
        case '\t':
            t[i]=' ';
            i++;
            break;
        case ' ':
            t[i]='\t';
            i++;
            break;
        default:
            t[i]=s[i];
            i++;
            break;
        }
    }
     t[i]=s[i];
}




int main(){
    char text1[50] = "Hello, \n\tWorld!";
    char text2[51]="";
    

    escape(text1,&text2);
    printf("original string: %s\n",text1);
    printf("modified string: %s",text2);
    escape(text2,text1);
    printf("convert it back;")
    return 0;
}
