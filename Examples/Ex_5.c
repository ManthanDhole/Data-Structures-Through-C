#include<stdio.h>

void PrintArray(int _arr[])
{
    for(int i; i < 5; i++)
    {
        printf("%d ", _arr[i]);
    }
}

void SwapNums(int Num1, int Num2)
{
    printf("Before Swap - Number 1: %d\t Number 2: %d\n", Num1, Num2);
    int temp;
    temp = Num1,
    Num1 = Num2,
    Num2 = temp;
    printf("After Swap - Number 1: %d\t Number 2: %d\n", Num1, Num2);
}

void SwapArray(int _arr1[], int _arr2[])
{
    printf("Array Before Swap\n");
    PrintArray(_arr1);
    printf("\t");
    PrintArray(_arr2);

    int temp[5];
    for(int i = 0; i < 5; i++)
    {
        temp[i] = _arr1[i], 
        _arr1[i] = _arr2[i], 
        _arr2[i] = temp[i];
    }

    printf("\nArray After Swap\n");
    PrintArray(_arr1);
    printf("\t");
    PrintArray(_arr2);
}

int main()
{
    int a = 4, b = 6;
    int arr1[5] = {1,2,3,4,5};
    int arr2[5] = {6,7,8,9,10};

    SwapNums(a,b);
    SwapArray(arr1, arr2);
}