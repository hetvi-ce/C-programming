#include<stdio.h>
void main()
{
    int age;
    printf("Enter your age=");
    scanf("%d",&age);
    if (age<12)
    {
        printf("you are eligible for free entry.\n");
    }
    else
    {
        printf("you have to pay 200 rs for entry.\n");
    }
}
