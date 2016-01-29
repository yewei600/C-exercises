#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/*Write a program to determine the ranges of char , short , int , and long variables, both signed and unsigned
by printing appropriate values from standard headers and by direct computation. Harder if you compute them:
determine the ranges of the various floating-point types*/
int main()
{
    printf("The range of char is %d to %d\n",SCHAR_MIN,SCHAR_MAX);
    printf("The range of unsigned char is 0 to %d\n",UCHAR_MAX);

    printf("The range of short is %d to %d\n",SHRT_MIN,SHRT_MAX);
    printf("The range of unsigned short is 0 to %d\n",USHRT_MAX);

    printf("The range of int is %d to %d\n",INT_MIN,INT_MAX);
    printf("The range of unsigned int is 0 to %f\n",UINT_MAX);

    printf("The range of long is %d to %d\n",LONG_MIN,LONG_MAX);
    printf("The range of unsigned long is 0 to %f\n",ULONG_MAX);

    return 0;
}
