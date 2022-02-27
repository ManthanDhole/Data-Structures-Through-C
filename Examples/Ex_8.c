#include<stdio.h>

int main()
{
    int arr[5] = {1,2,3,4,5}, *p = arr;

    for (int i = 0; i < 5; i++)
    {
        (*p)++;
        printf("%d ", *p);
        p++;
    }
    
}