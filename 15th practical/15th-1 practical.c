#include<stdio.h>
void main()
{
    int start,choice;
   x: printf("enter the starting number of seconds = ");
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
        printf("Do you want to restart countdown?\n");
        printf("if you want to restart countdown enter '1', otherwise enter '0'. ");
        scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        {
            goto x;
            break;
        }
    case 0:
        {
            printf("thank you.");
            break;
        }
    default:
        {
            printf("invalid input.");
            break;
        }
    }

}

