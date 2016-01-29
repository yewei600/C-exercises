#include <stdio.h>
#include <stdlib.h>


/*Write binary search function with only one test inside the loop*/

int binsearch(int x, int v[], int n){
    int low,high,mid;

    low=0;
    high=n-1;
    mid = (low+high)/2;
    while(low<=high && x!=v[mid]){
        if(v[mid]<x){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
        mid = (low+high)/2;
    }

    if(x==v[mid]){
        return mid;
    }
    else{
        return -1;
    }
}



int main()
{
    int a[] = {0,1,2,3,4,5,6,7,8,9};
    int num,ans;
    printf("Enter a number: ");
    scanf("%d",&num);
    if((ans=binsearch(num,a,10))>=0){
        printf("%d occurs at %dth place in the array",num,ans);
    }else{
        printf("%d not in array",num);
    }
    return 0;
}
