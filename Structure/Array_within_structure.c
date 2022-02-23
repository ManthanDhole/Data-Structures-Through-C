#include<stdio.h>

struct Student 
{
    int RollNo;
    char Name[10];
    int SubMarks[3];
};



int main()
{
    struct Student Studs[3];

    for(int i = 0; i<3; i++)
    {
        printf("Enter the details of the student no. %d\n", i+1);
        printf("Enter the Roll No : ");
        scanf("%d", &Studs[i].RollNo);
        printf("Enter the Name : ");
        scanf("%s", &Studs[i].Name);

        for (int j = 0; j < 3; j++)     
        {
            printf("Enter the marks in Subject %d : ", j+1);
            scanf("%d", &Studs[i].SubMarks[j]);
        }        
    }

    printf("The Details of all the students\n");
    for(int i = 0; i < 3; i++)
    {
        printf("Student No. %d\n", i+1);
        printf("Roll No : %d - %s\n", Studs[i].RollNo, Studs[i].Name);
        printf("Marks\n");
        for(int j = 0; j<3; j++)
        {
            printf("Subject %d : %d\n", j+1, Studs[i].SubMarks[j]);
        }
    }
}