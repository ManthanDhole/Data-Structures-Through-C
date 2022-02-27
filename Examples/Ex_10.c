#include<stdio.h>

int main()
{
    int arr[10] ={1,2,3,4,5,6,7,8,9,10}, *p = arr;
    for (p = arr+2; p < arr+8; p=p+2)
    {
        printf("%d ", *p);
    }    
}