#include<stdio.h>

int main()
{
    int arr[6] = {4,2,6,0,5,10};
    int sum = 0, i = 0;

    while (arr[i])
    {
        sum = sum + arr[i];
        i++;
    }

    printf("%d\n",sum);
    
}