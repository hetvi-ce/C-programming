
#include<stdio.h>
int savings(int month)
{
    int n=0;
    if(month==1 || month==2)
    {
        return 1;
    }
    else
    {
        n=savings(month-1)+savings(month-2);
        return n;
    }
}

void main()
{
    int month,i,total=0;
    printf("enter the number of months : ");
    scanf("%d",&month);
    if(month>0)
    {
        printf("here is your progress:\n");
        for(i=1;i<=month;i++)
        {
            printf("month-%d savings : %d \n",i,savings(i));
            total+=savings(i);
        }
        printf("total amount saved over %d months :%d",month,total);
    }

    else
    {
        printf("enter a valid number of month.");
    }
}
