#include<stdio.h>
#include<unistd.h>
void main()
{
    int start,i,ch;
    x:
    printf("from which number you want to start coundown=");
    scanf("%d",&start);
    if (start>0)
    {
        for (i=start;i>0;i--)
        {
            printf("%d\n",i);
            sleep(1);
        }
        printf("do you want to restart?\n if yes press 1 and if no press 0.\n");
        scanf("%d",&ch);
        if (ch==1)
        {
            goto x;
        }
        else if (ch==0)
        {
            printf(" ");
        }
        else
        {
            printf("invalid input.");
        }
    }
    else
    {
        printf("invalid input");
    }
}
