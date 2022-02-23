#include<stdio.h>
//If we define the inner structure outside the main structure, then the inner structure must be defined before definition the outer structure.
//The main benefit of defining a structure outside is that, we can use it at other places wherever we want.

struct Date
{
    int Day;
    char Month[3];
    int Year;
};

struct Student
{
    int RollNo;
    char Name[20];
    struct Date BirthDate, JoiningDate;
};


int main()
{
    struct Student First = { 1, "Manthan", 22, "Aug", 1998 , 16, "Sep", 2021};

    printf("%d - %s -> %d/%s/%d & %d/%s/%d\n", First.RollNo, First.Name, First.BirthDate.Day, First.BirthDate.Month, First.BirthDate.Year,
                                    First.JoiningDate.Day, First.JoiningDate.Month, First.JoiningDate.Year);
 
    struct Date Today = { 17, "Feb", 2022 };
    printf("%d/%s/%d\n", Today.Day, Today.Month, Today.Year);
}