#include<stdio.h>

//All the arguements here will take the Address of the Array and the from there you can use that address to traverse through the entire array by using a variable counter : i
void ArraySize(int i[], float f[5], char *c)
{    
    printf("In ArraySize function : \n");
    printf("Address of Integer array = %d\n", i);
    printf("Address of Float array = %d\n", f);
    printf("Address of Character array = %d\n", c);
}

void main()
{
    int i_arr[5] = {1,2,3,4,5};
    float f_arr[5] = {1.2, 3.2, 4.2, 5.2, 6.2};
    char c_arr[5] = {'a', 'b', 'c', 'd','e'};

    printf("In main function : \n");
    printf("Size of Integer array = %d\n", sizeof(i_arr));
    printf("Size of Float array = %d\n", sizeof(f_arr));
    printf("Size of Character array = %d\n", sizeof(c_arr));

    printf("\n");

    ArraySize(i_arr, f_arr, c_arr);
}