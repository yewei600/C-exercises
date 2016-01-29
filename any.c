#include <stdio.h>
#include <stdlib.h>


/*Write the function any(s1,s2) , which returns the first location in the string s1 where 
any character from the string s2 occurs, or -1 if s1 contains no characters from s2 . 
(The standard library function strpbrk does the same job but returns a pointer to the location.)
*/

int any(char s[],char t[]){
    int i,j;
    for(i=0;t[i]!='\0';i++){
        for(j=0;s[j]!='\0';j++){
            if(s[j]==t[i])
                return j;
        }
    }
    return -1;

}


int main()
{
    char s1[50],s2[50];
    printf("Enter the first string: ");
    scanf("%s",s1);
    printf("Enter the second string: ");
    scanf("%s",s2);
    int answer;
    if ((answer=any(s1,s2))>=0){
       printf("s1 first had the same char as s2 at index %d",answer);
    }

    else{
       printf("s1 and s2 has no common char");
    }

    return 0;
}
