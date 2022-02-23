#include<stdio.h>
#include<string.h>

struct Student
{
    int RollNo;
    char Name[10];
};

void DisplayNoName(int _RNo, char _Name[])
{
    printf("Roll No: %d\n", _RNo);
    printf("Name: %s\n", _Name);
}

void DisplayStruct(struct Student stud)
{
    stud.RollNo++;
    printf("Roll No: %d\n", stud.RollNo);
    printf("Name: %s\n", stud.Name);
}

int main()
{
    struct Student stud1 = { 1, "Manthan" };
    DisplayNoName(stud1.RollNo, stud1.Name);
    DisplayStruct(stud1);
    printf("Marks in Main Function : %d\n", stud1.RollNo);
}