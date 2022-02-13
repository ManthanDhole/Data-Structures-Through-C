#include<stdio.h>
#include<stdlib.h>

void PrintNumbers(int *ptr, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d\t", *(ptr+i));
    }
}

void StoreNumbers(int *ptr, int size)
{
    for (int i = 0; i < size; i++) 
    {
        printf("Enter the number %d : ", i+1);
        scanf("%d", ptr+i);
    }
}

void StoreAfterReallocation(int *ptr, int PreviousSize, int NewSize)
{
    for (int i = PreviousSize; i < NewSize; i++) 
    {
        printf("Enter the number %d : ", i+1);
        scanf("%d", ptr+i);
    }
}


int main()
{
    int n, m, i, *ptr;
    int ReallocatedNums;

    printf("Enter how many numbers you want to store : ");
    scanf("%d", &n);

    ptr = (int *) malloc(n*sizeof(int));

    StoreNumbers(ptr, n);
    PrintNumbers(ptr, n);

    printf("\nDo you want to add more numbers?\ny : Yes/ n : No\n");
    char MoreNums;
    scanf("%s", &MoreNums);

    if (MoreNums == 'y')
    {
        printf("How many more numbers you want to store?\n");
        scanf("%d", &m);
        ReallocatedNums = n+m;
        ptr = (int *) realloc(ptr, ReallocatedNums*sizeof(int));

        StoreAfterReallocation(ptr, n, ReallocatedNums);
        PrintNumbers(ptr, ReallocatedNums);        
    }
    else
    {
        printf("Thank you for trying out my program! Bye!!!");
        exit(1);
    }
        

    

    
}