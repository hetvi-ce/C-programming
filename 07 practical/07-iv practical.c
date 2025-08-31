#include<stdio.h>
void main()
{
    int ch,num,pay;
    printf("WELCOME to SUNRISE AMUSEMENT PARK.\n");
    printf("Enter 1 if you are child,enter 2 if you are adult,enter 3 if you are sinior citizon\n");
    scanf("%d",&ch);
    if (ch==1)
    {
        printf("you are eligible for free entry.\n");
    }
    else if (ch==2)
    {
        printf("enter number of adults in your groop.");
        scanf("%d",&num);
        if (num>5)
            {
                pay=200*num-(200*num*10)/100;
                printf("you are eligible for 10%% discount.\nyou have to pay %d rs.\n",pay);
            }
        else
            {
                pay=200*num;
                printf("you have to pay %d rs.",pay);
            }
    }
    else if (ch==3)
    {
        printf("you are eligible for senior setizon discount.\nEnter numbers of senior citizon in your groop=");
        scanf("%d",&num);
        if (num>5)
        {
            pay=100*num-(100*num*10)/100;
            printf("\nyou have to pay %d rs for entry.\n",pay);
        }
        else
        {
            pay=100*num;
            printf("you have to pay %d rs for entry.\n",pay);
        }
    }
    else
    {
        printf("invalid input.");
    }
}
