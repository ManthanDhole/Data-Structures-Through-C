#include<stdio.h>

void main()
{
    int a = 2, b = 4, c = 6;
    //Declaring the Array of pointer = This array will contain addresses in it.
    int *pointer_array[3]; 

    pointer_array[0] = &a;
    pointer_array[1] = &b;
    pointer_array[2] = &c;

    for(int i = 0; i < 3; i++)
    {
        printf("Address of element %d : %d\n", i+1, pointer_array[i]);
        printf("Value of element %d : %d\n", i+1, *pointer_array[i]);
    }
}