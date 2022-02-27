#include<stdio.h>

void Swap(int x, int *y)
{
    int temp;

    temp = x;
    x = *y;
    *y = temp;
}

int main()
{
    int a = 2, b = 6;
    printf("Before swap => a - %d\t b - %d\n", a, b);
    Swap(a,&b);
    printf("After swap => a - %d\t b - %d\n", a, b);
}

