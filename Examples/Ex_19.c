#include<stdio.h>

struct tag { int i; char c; };
void func(struct tag *);

int main()
{
    struct tag var = { 12, 'c' };
    printf("%d %c\n", var.i, var.c);
    func(&var);
    printf("%d %c\n", var.i, var.c);
}
//assigning the struct's address can make the changes on the actual variable
void func(struct tag *v)
{
    v->i++;
}