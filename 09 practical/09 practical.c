#include<stdio.h>
void main()
{
    float shop_amt,total_amt;
    x:
    printf("Enter your shopping account=");
    scanf("%f",&shop_amt);
    printf("your shopping amount is %.2f rs.\n",shop_amt);
    if (shop_amt>0 && shop_amt<1000)
    {
        printf("no discounts applied.\nyou have to pay %.2f rs.",shop_amt);
    }
    else if (shop_amt>=1000 && shop_amt<5000)
    {
        printf("you got 10%% discount.");
        total_amt=shop_amt-(shop_amt*10)/100;
        printf("you have to pay %.2f rs.",total_amt);
    }
    else if (shop_amt>=5000)
    {
        printf("you got 20%% discount");
        total_amt=shop_amt-(shop_amt*20)/100;
        printf("you have to pay %.2f rs.",total_amt);
    }
    else
    {
        printf("enter a valid amount.");
        goto x;
    }
}
