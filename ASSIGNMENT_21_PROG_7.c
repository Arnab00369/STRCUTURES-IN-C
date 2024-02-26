#include <stdio.h>
struct timedef
{
    int hours;
    int mins;
    int secs;
};
void main()
{
    struct timedef t1,t2,sub;
    printf("Enter the First Time ::\nHours = ");
    scanf("%d",&t1.hours);
    printf("Minutes = ");
    scanf("%d",&t1.mins);
    printf("Seconds = ");
    scanf("%d",&t1.secs);
    printf("\nEnter the Second Time ::\nHours = ");
    scanf("%d",&t2.hours);
    printf("Minutes = ");
    scanf("%d",&t2.mins);
    printf("Seconds = ");
    scanf("%d",&t2.secs);
    if(t1.secs>t2.secs)
    {
        t2.secs+=60;
        --t2.mins;
    }
    if(t1.mins>t2.mins)
    {
        t2.mins+=60;
        --t2.hours;
    }
    sub.secs=t2.secs-t1.secs;
    sub.mins=t2.mins-t1.mins;
    sub.hours=t2.hours-t1.hours;
    printf("OUTPUT::\nDifference in Timing ::\nHours : Minutes : Seconds = %d : %d : %d",sub.hours,sub.mins,sub.secs);
    getch();
}
