#include<stdio.h>

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    int *p;

    for (p = arr+9; p >= arr; p--)
    {
        printf("%d ", *p--);
    }
    
}