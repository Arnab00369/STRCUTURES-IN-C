#include <stdio.h>
struct marks
{
    char name[1000];
    int roll_no;
    float chem_marks;
    float maths_marks;
    float phy_marks;
};
void main()
{
    struct marks m[5];
    printf("Enter the Details of 5 Students ::\n");
    for(int i=0;i<5;i++)
    {
         printf("\nEnter the Name of Student %d : ",i+1);
        fflush(stdin);
        fgets(m[i].name,1000,stdin);
        printf("Enter the Roll No. of Student %d : ",i+1);
        scanf("%f",&m[i].roll_no);
        printf("Enter the Marks of Student %d ::\nChemistry = ",i+1);
        scanf("%f",&m[i].chem_marks);
        printf("Mathematics = ");
        scanf("%f",&m[i].maths_marks);
        printf("Physics  = ");
        scanf("%f",&m[i].phy_marks);
    }
    printf("\n\nThe Record of 5 Students are as follows ::");
    for(int i=0;i<5;i++)
    {
        printf("\n\nStudent %d ::\nName : %s",i+1,m[i].name);
        printf("Roll No. : %d",m[i].roll_no);
        printf("\nMarks ::\nChemistry : %.0f\nMathematics : %.0f\nPhysics : %.0f",m[i].chem_marks,m[i].maths_marks,m[i].phy_marks);
        printf("\nPercentage : %.2f",(m[i].chem_marks+m[i].maths_marks+m[i].phy_marks)/3);
    }
    getch();
}
