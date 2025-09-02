#include<stdio.h>
#include<unistd.h>
void main()
{
    int start;
    printf("from which number you want to start coundown=");
    scanf("%d",&start);
    if (start>0)
    {
        while (start)
        {
            printf("\n%d",start);
            start--;
            sleep(1);
        }
        printf("\ncountdown completed.\n");
    }
    else
    {
        printf("invalid input.");
    }
}
