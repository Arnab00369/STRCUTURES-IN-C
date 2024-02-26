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
    printf("\n\nThe Data of Employees Recorded in increasing order of their Salaries are as follows ::");
    for(int i=0;i<10;i++)
    {
    printf("\n\nEmployee %d ID = %d",i+1,s[i].id);
    printf("\nEmployee Name %d is : %s",i+1,s[i].name);
    printf("Salary of the Employee %d = Rs. %d",i+1,s[i].salary);
    }
}
void sort(struct Employee s[])
{
   int i,j;
   struct Employee temp;
   for(i=0;i<9;i++)
   {
       for(j=i+1;j<10;j++)
       {
           if(s[i].salary>s[j].salary)
           {
               temp=s[i];
               s[i]=s[j];
               s[j]=temp;
           }
       }
   }
}
void main()
{
    struct Employee s[10];
    input(&s);
    sort(s);
    display(s);
    getch();
}


