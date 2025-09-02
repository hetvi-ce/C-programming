#include<stdio.h>
void main()
{
    int start,i;
    printf("from which number you want to start coundown=");
    scanf("%d",&start);
    if(start>0)
    {
        for (i=start;i>0;i--)
        {
            printf("%d\n",i);
        }
    }
    else
    {
       printf("invalid input.");
    }
}
