#include<stdio.h>

struct Tag
    {
        int i;
        char c;
    };
void Function(struct Tag v)
{
    printf("%d - %c\n", v.i, v.c);
}


int main()
{
    struct Tag var = {2, 's'};
    Function(var);
}
