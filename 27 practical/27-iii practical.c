#include<stdio.h>
int savings_i(int month)
{
    int n=0,a=1,b=1,c,i;
    if(month==1 || month==2)
    {
        return 1;
    }
    else
    {
        for(i=3;i<=month;i++)
        {
            c=a+b;
            a=b;
            b=c;
        }
        return b;
    }
}

void main()
{
    int month,i;
    printf("enter the number of months : ");
    scanf("%d",&month);
    if(month>0)
    {
        printf("here is your progress:\n");
        for(i=1;i<=month;i++)
        {
            printf("month-%d savings : %d \n",i,savings_i(i));
        }
    }
    else
    {
        printf("enter a valid number of month.");
    }
}
