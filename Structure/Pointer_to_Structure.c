#include<stdio.h>

struct Student 
{
    int RollNo;
    char _firstName[10];
    char _lastName[10];
};


int main()
{
    struct Student Stu1 = { 1, "Manthan", "Dhole"};
    struct Student *Stu2;

    printf("Structure - %d - %s %s\n", Stu1.RollNo, Stu1._firstName, Stu1._lastName);

    Stu2 = &Stu1;

    printf("Pointer - %d - %s %s\n", (*Stu2).RollNo, (*Stu2)._firstName, (*Stu2)._lastName);
    printf("Pointer With Arrow - %d - %s %s\n", Stu2->RollNo, Stu2->_firstName, Stu2->_lastName);

    int *RNo;
    RNo = &Stu1.RollNo;
    printf("Roll No - %d\n", *RNo);

    //Need to figure out how to get the char to be stored in the Pointer
    // char *Name;
    // Name = &Stu1._firstName;
    // printf("Name - %s\n", *Name);
}