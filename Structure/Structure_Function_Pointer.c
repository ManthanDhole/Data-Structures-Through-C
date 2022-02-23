#include<stdio.h>
#include<string.h>

struct Student
{
    char Name[10];
    int Marks;
};

void DisplayStruct(struct Student *stu)
{
    stu->Marks += 10;
    printf("Name : %s\n",stu->Name);
    printf("Marks : %d\n",stu->Marks);
}


int main()
{
    struct Student stud1 ={"Manthan", 25};
    struct Student stud2 ={"Mishkil", 65};

    printf("Marks in Main Function : %d\n", stud1.Marks);
    DisplayStruct(&stud1);
    printf("Marks in Main Function : %d\n", stud1.Marks);
}