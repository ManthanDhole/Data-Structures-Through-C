#include<stdio.h>

struct tag { int i; char c; };
void func(struct tag);

int main()
{
    struct tag var = {12, 'c'};
    printf("%d %c\n", var.i, var.c);
    func(var);
    printf("%d %c\n", var.i, var.c);
}
//just passing the structure wont make any changes in the actual variables
void func(struct tag v)
{
    v.i++;
}
