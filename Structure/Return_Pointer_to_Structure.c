#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Student 
{
    int _rollNo;
    char _name[10];
    int _marks;
};

struct Student *ptr;

struct Student *func()
{
    ptr = (struct Student *) malloc(sizeof(struct Student));
    ptr->_rollNo = 1;
    strcpy(ptr->_name, "Manthan");
    ptr->_marks = 50;

    return ptr;
}

void Display(struct Student *stud)
{
    printf("%d - %s -> %d", stud->_rollNo, stud->_name, stud->_marks);
}

int main()
{
    //struct Student stu1 = { 1, "Manthan", 50};
    struct Student *stuptr;
    stuptr = func();
    Display(stuptr);
    free(stuptr);
}