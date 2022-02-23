#include<stdio.h>

void PrintArray(int arr[], int size)
{    
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}

void main()
{
    int arr[5] = { 3, 5, 2, 7, 9};

    int large = arr[0];
    int small = arr[0];

    PrintArray(arr,5);

    for(int i = 1; i < 5; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
        }
        else if (arr[i] > large)
        {
            large = arr[i];
        }
    }
    

    printf("\nLargest = %d\nSmallest = %d", large, small);
}