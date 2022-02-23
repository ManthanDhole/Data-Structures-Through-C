#include<stdio.h>

struct Name
{
    char _firstName[10];
    char _lastName[10];
    unsigned int _phoneNo;
};


int main()
{
    // struct Name Family[3];

    // for(int i = 0; i < 3; i++)
    // {
    //     printf("Enter the Name of %d Member\n", i+1);
    //     printf("First Name : ");
    //     scanf("%s", &Family[i]._firstName);
    //     printf("Last Name : ");
    //     scanf("%s", &Family[i]._lastName);
    //     printf("Phone Number : ");
    //     scanf("%d", &Family[i]._phoneNo);
    // }

    // for(int i = 0; i < 3; i++)
    // {
    //     printf("%s ", Family[i]._firstName);
    //     printf("%s ", Family[i]._lastName);
    //     printf("%d\n", Family[i]._phoneNo);
    // }

    struct Name FamilyName[3] =
    {
        {"Manthan", "Dhole", 984527084},
        {"Mrunalini", "Dhole", 89432534},
        {"Pranav", "Dhole", 34572349 }
    };
    
    for(int i = 0; i < 3; i++)
    {
        printf("%s ", FamilyName[i]._firstName);
        printf("%s ", FamilyName[i]._lastName);
        printf("%d\n", FamilyName[i]._phoneNo);
    }

}