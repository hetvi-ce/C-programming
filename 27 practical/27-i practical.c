#include<stdio.h>
int savings(int month,int s1, int s2)
{
    int n=0;
    if (month==1)
    {
        return s1;
    }
    if (month==2)
    {
        return s1+s2;
    }
    else
    {
        n=savings(month-1,s1,s2)+savings(month-2,s1,s2);
        return n;
    }
}

void main()
{
    int month=0,i,s1=0,s2=0;
    printf("enter the number of months : ");
    scanf("%d",&month);
    if(month>0)
    {
        printf("enter value for month 1:");
        scanf("%d",&s1);
        printf("enter value for month 2:");
        scanf("%d",&s2);

        printf("here is your progress:\n");
        for(i=1;i<=month;i++)
        {
            printf("month-%d savings : %d \n",i,savings(i,s1,s2));
        }
    }
    else
    {
        printf("enter a valid number of month.");
    }
}
