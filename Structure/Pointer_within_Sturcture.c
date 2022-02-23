#include<stdio.h>

struct Student
{
    int RollNo;
    int *PhoneNo;
};


int main()
{
    int Phone = 3425;
    struct Student stud1 = { 1, stud1.PhoneNo = &Phone };
    struct Student *stud2;

    printf("%d - %d\n", stud1.RollNo, *stud1.PhoneNo);
    
    stud2 = &stud1;
    // stud2->RollNo = 3;
    // stud2->PhoneNo = &stud1.PhoneNo;

    printf("%d - %d\n", stud2->RollNo, *stud2->PhoneNo);
}