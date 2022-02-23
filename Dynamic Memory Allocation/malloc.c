#include<stdio.h>
#include<stdlib.h>

main()
{
    int *p, n, i, j;

    printf("Enter the number of integers that you want to store : ");
    scanf("%d", &n);
        //Type cast the pointer returned by the malloc to a specific datatype
    p = (int *) malloc(n * sizeof(int));
                    //specify how much size do you want to allocate

    //Block use to check if the memory is not available then it should not allocate any new memory block
    if (p == NULL)
    {
        printf("Memory is not available");
        exit(1);
    }
    
    for(i=0; i<n; i++)
    {
        printf("Enter a number: ");
        scanf("%d", p+i);
                    //To access the element in the pointer p we need to use the pointer arithematics
    }
    
    for(j=0; j<n; j++)
    {
        printf("The number at position %d is %d\n", j, *(p+j));
    }  
}