#include<stdio.h>

int main()
{
    int arr[5] ={1,2,3,4,5};

    for(int i = 0; i<5; i++)
    {
        printf("%d ", *arr+i);
        // arr++;
        //This statement gives errors..Not valid statement for print array elements using just increment operator
    }
}