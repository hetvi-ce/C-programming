#include<stdio.h>
void main()
{
    float withdraw,rem_bal;
    printf("your curren balance is 5000 rs.\nyour how much amount you want to withdraw=");
    scanf("%f",&withdraw);
    if (withdraw>0)
    {
        rem_bal=5000-withdraw;
        if (rem_bal>1000)
        {
            printf("your remaining balance is %.2f",rem_bal);
        }
        else
        {
            printf("insufficient balance.");
        }
    }
    else
    {
        printf("invalid input.");
    }
}
