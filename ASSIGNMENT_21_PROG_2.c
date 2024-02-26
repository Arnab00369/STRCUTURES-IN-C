#include <stdio.h>
struct Employee
{
    long int id;
    char name[100];
    int salary;
};
void input(struct Employee *s)
{
    printf("Enter the Employee ID = ");
    scanf("%d",&s->id);
    printf("Enter the Name of the Employee : ");
    fflush(stdin);
    scanf("%s",&s->name);
    printf("Enter the Salary of the Employee = Rs. ");
    scanf("%d",&s->salary);
}
