#include<stdio.h>

void PrintArray(int arr[], int size)
{    
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void SwapNumbers(int a, int b)
{
    int temp = 0;
    
    temp = a;
    a = b;
    b = temp;
}

void ReverseArray(int array[], int size)
{
    int temp = 0;
    int i, j;
    for(i = 0, j = size-1 ; i < j ; i++, j--)
    {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
    PrintArray(array, 5);
}

void ReverseArray_Using_While_Loop(int array[], int size)
{
    int start = 0;
    int end = size -1;

    while (start < end)
    {
        SwapNumbers(array[start], array[end]);
        start++;
        end--;
    }

    PrintArray(array, size);
    

}

void main()
{
    int arr[5] = {3, 4, 6, 2, 7};

    PrintArray(arr, 5);
    // ReverseArray(arr, 5);
    ReverseArray_Using_While_Loop(arr,5);


}