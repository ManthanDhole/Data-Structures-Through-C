#include<stdio.h>
#include<string.h>

// void PrintStruct(struct Name[])
// {
//     printf("%d. %s %s", Name.Roll_No, Name[]._FirstName, Name[]._LastName);
// }

struct Student
{
    int Roll_No;
    char _FirstName[20];
    char _LastName[20];
};


int main()
{
    //Directly Assign the values while declaring the Structure Variable
    struct Student One = { 1, "Manthan", "Dhole" };
    printf("%d - %s %s\n", One.Roll_No, One._FirstName, One._LastName);


    struct Student Two;
    strcpy(Two._FirstName, "Bagad");
    Two.Roll_No = 2;
    strcpy(Two._LastName,"Billa");
    printf("%d - %s %s\n",Two.Roll_No, Two._FirstName, Two._LastName);

    struct Student Three;
    printf("Enter the Information about the student\n");
    printf("Roll No: ");
    scanf("%d", &Three.Roll_No);
    printf("First: ");
    scanf("%s", &Three._FirstName);
    printf("Last Name: ");
    scanf("%s", &Three._LastName);
    printf("%d - %s %s\n",Three.Roll_No, Three._FirstName, Three._LastName);

    struct Student Four = Three;
    printf("%d - %s %s\n",Four.Roll_No, Four._FirstName, Four._LastName);



}