#include <stdio.h>
struct Employee
{
    long int id;
    char name[100];
    int salary;
};
void input(struct Employee *s)
{
    printf("Enter the Details of 10 Employees ::\n");
    for(int i=0;i<10;i++)
    {
        printf("Enter the Employee %d ID = ",i+1);
        scanf("%d",&s[i].id);
        printf("Enter the Name of the Employee %d : ",i+1);
        fflush(stdin);
        fgets(s[i].name,100,stdin);
        printf("Enter the Salary of the Employee %d = Rs. ",i+1);
        scanf("%d",&s[i].salary);
    }
}
void display(struct Employee s[])
{
    printf("\n\nThe Data of Employees Recorded are as follows ::");
    for(int i=0;i<10;i++)
    {
    printf("\n\nEmployee %d ID = %d",i+1,s[i].id);
    printf("\nEmployee Name %d is : %s",i+1,s[i].name);
    printf("Salary of the Employee %d = Rs. %d",i+1,s[i].salary);
    }
}
void max(struct Employee s[])
{
    int max=-1,m=0;
    for(int i=0;i<10;i++)
    {
        if(s[i].salary>max)
        {

            max=s[i].salary;
            m=i;
    }
    }
    printf("\nThe Employee with Maximum Salary is Employee %d with Salary = Rs. %d",m+1,max);

}
void main()
{
    struct Employee s[10];
    input(&s);
    display(s);
    max(s);
    getch();
}

