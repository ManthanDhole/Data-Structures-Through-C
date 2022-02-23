#include<stdio.h>

void CheckEven_Odd(int *array);

void main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    CheckEven_Odd(arr);   
}

void CheckEven_Odd(int *array)
{
    
    for (int i = 0; i < 10; i++)
    {         
        if(array[i]%2 == 0)
        {
            printf("%d is Even\n",array[i]);
        }
        else
        {
            printf("%d is Odd\n",array[i]);
        }
    }
   
}