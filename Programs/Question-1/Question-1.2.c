// Define a structure called Student that will describe the following information Name , ID_Number, Address, Percentage Using Student structure declare an array student with Dynamic Memory Allocation and write a program to read the information about all students and print all details of students whose percentage is greater than 60.

#include <stdio.h>
#include <conio.h>
struct student
{
    char name[10];
    int id;
    char add[20];
    float per;
};
void main()
{
    int i, n;
    struct student *s;
    printf("Enter number of students:");
    scanf("%d", &n);
    s = (struct student *)malloc(n * sizeof(struct student));
    for (i = 0; i < n; i++)
    {
        printf("Enter name:");
        scanf("%s", &s[i].name);
        fflush(stdin);
        printf("Enter id:");
        scanf("%d", &s[i].id);
        fflush(stdin);
        printf("Enter address:");
        scanf("%s", &s[i].add);
        fflush(stdin);
        printf("Enter percentage:");
        scanf("%f", &s[i].per);
    }
    for (i = 0; i < n; i++)
    {
        if (s[i].per > 60)
        {
            printf("Name:%s", s[i].name);
            printf("\nId:%d", s[i].id);
            printf("\nAddress:%s", s[i].add);
        }
    }
}
