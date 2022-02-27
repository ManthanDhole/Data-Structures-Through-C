#include<stdio.h>

int main()
{
    int arr[5] = {2,4,6,8,10}, *p;
    p = arr;

    for(int i = 0; i<5; i++)
    {
        printf("%d - %d\n", arr[i], *(p+i));
    }

}