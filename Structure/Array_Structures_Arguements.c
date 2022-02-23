#include<stdio.h>

struct Student
{
    int _rollNo;
    char _name[10];
    int _marks;
};

void Display(struct Student stu[])
{
    for (int i = 0; i < 3; i++)
    {
        printf("%d - %s -> %d\n", stu[i]._rollNo, stu[i]._name, stu[i]._marks);
    }
}

void Decrease_Marks(struct Student studs[])
{
    for(int i = 0; i < 3; i++)
    {
        studs[i]._marks = studs[i]._marks - 10;
    }
}

int main()
{
    struct Student stu[3] =
    {
        {1, "Manthan", 40},
        {2, "Biswajit", 50},
        {3, "Shiv", 60}
    };

    Display(stu);
    Decrease_Marks(stu);
    Display(stu);
}