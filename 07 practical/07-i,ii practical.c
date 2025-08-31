#include<stdio.h>
void main()
{
    int age,num,pay;
    printf("Enter your age=");
    scanf("%d",&age);
    if (age<12)
    {
        printf("you are eligible for free entry.\n");
    }
    else if (age<60)
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
    else if (age<120)
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
