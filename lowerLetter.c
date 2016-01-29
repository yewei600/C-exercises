#include <stdio.h>
#include <stdlib.h>


/*converts upper case letters to lower case .
*/

int lower(char c){
    if(c>='A' && c<='Z'){
        return c-'A'+'a';
    }
    else{
        return c;
    }
}



int main()
{
    char l;
    printf("Enter a letter: ");
    scanf("%c",&l);

    if(l>='a' && l<='z'){
        printf("The letter is already lower case");
    }
    else{
        l=lower(l);
        printf("The lower case letter is %c",l);
    }

    return 0;
}
