#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, i, *ptr;

    printf("Enter how many numbers you want to store : ");
    scanf("%d", &n);

    ptr = (int *) calloc(n, sizeof(int));
    printf("%d\n", ptr);

    for (i = 0; i < n; i++)
    {
        printf("Enter the number: ");
        scanf("%d", ptr + i);
    }

    printf("The numbers stored are as follows\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t", *(ptr+i));
    }

    free(ptr);
    
    printf("\nThe numbers after the memory is freed\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t", *(ptr+i));
    }
}