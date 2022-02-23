#include<stdio.h>

struct Student
{
    int _rollNo;
    char _name[10];
    int _marks;
};


void DisplayStruct(struct Student student)
{
    printf("%d - %s -> %d\n", student._rollNo, student._name, student._marks);
}

struct Student ChangeMarks(struct Student stud)
{
    stud._marks = stud._marks + 10;
    return stud;
}

int main()
{
    struct Student stu1 = { 1, "Manthan", 30};

    DisplayStruct(stu1);

    struct Student stu2;
    stu1 = ChangeMarks(stu1);
    DisplayStruct(stu1);
}