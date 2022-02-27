#include<stdio.h>

int main()
{
    struct A
    {
        int marks;
        int grade;
    };
    
    struct A a1,b1;

    a1.marks = 80;
    a1.grade = 'A';
    printf("%d %c\n", a1.marks, a1.grade);

    b1 = a1;
    printf("%d %c\n", b1.marks, b1.grade);
}