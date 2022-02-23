#include<stdio.h>

struct Student
{
    int RollNo;
    char Name[20];
    struct Date
    {
        int Day;
        int Month;
        int Year;
    } Birthdate;
};


int main()
{
    struct Student First = { 1, "Manthan", 22, 8, 1998 };

    printf("%d - %s -> %d/%d/%d\n", First.RollNo, First.Name, First.Birthdate.Day, First.Birthdate.Month, First.Birthdate.Year);
}