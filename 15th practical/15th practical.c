#include<stdio.h>
void main()
{
    int start;
    printf("enter the starting number of seconds = ");
    scanf("%d",&start);
    if(start>0)
    {
        while(start)
          {
                printf("\n%d",start);
                start--;
                sleep(1);

          }
           printf("\ncountdown completed. \n");
    }
    else
        {
            printf("invalid input.\n");
        }

}

