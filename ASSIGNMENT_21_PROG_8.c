#include <stdio.h>
struct student
{
    char name[1000];
    int roll;
    char stream[100];
};
void main()
{
    struct student s[10];
    printf("Enter the Details of 10 Students ::\n");
    for(int i=0;i<=9;i++)
    {
        printf("Enter the Name of Student %d : ",i+1);
        fflush(stdin);
        fgets(s[i].name,1000,stdin);
        printf("Enter the Roll No. of Student %d : ",i+1);
        scanf("%d",&s[i].roll);
        printf("Enter the Stream of Student %d : ",i+1);
        fflush(stdin);
        fgets(s[i].stream,1000,stdin);
    }
    printf("\n\nThe Record of the Students are as follows ::");
    for(int i=0;i<=9;i++)
    {
        printf("\n\nStudent %d ::\nName : %sRoll No. : %d\nStream : %s",i+1,s[i].name,s[i].roll,s[i].stream);
    }
    getch();
}
