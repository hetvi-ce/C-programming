#include<stdio.h>
#define ticket 150
#define discount_ticket 100
int main()
{
    int age,adults,fare_ticket,senior_citizens,total_ticket;
    printf("enter your age =");
    scanf("%d",&age);
        if (age<10)
        {
            printf("you are eligibal for free entry");
        }
        else if(age<60)
        {
            printf("enter number of adults=");
            scanf("%d",&adults);
            fare_ticket=adults*ticket;
            printf("your fare ticket is %d",fare_ticket);
        }
        else
        {
            printf("enter nubmber of senior citizens=");
            scanf("%d",&senior_citizens);
            total_ticket=senior_citizens*discount_ticket;
            printf("your fare ticket is %d",total_ticket);
        }

    return 0;
}
