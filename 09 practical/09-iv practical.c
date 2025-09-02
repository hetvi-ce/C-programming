#include<stdio.h>
void main()
{
    float shop_amt,total_amt,final_amt,pay_amt,amt;
    int ch,code,choice,repet;
    x:
    printf("Enter your shopping account=");
    scanf("%f",&shop_amt);
    printf("your shopping amount is %.2f rs.\n",shop_amt);
    if (shop_amt>0 && shop_amt<1000)
    {
        total_amt=shop_amt;
        printf("no discounts applied.\nyou have to pay %.2f rs.\n",total_amt);
    }
    else if (shop_amt>=1000 && shop_amt<5000)
    {
        printf("you got 10%% discount.");
        total_amt=shop_amt-(shop_amt*10)/100;
        printf("you have to pay %.2f rs.\n",total_amt);
    }
    else if (shop_amt>=5000)
    {
        printf("you got 20%% discount");
        total_amt=shop_amt-(shop_amt*20)/100;
        printf("you have to pay %.2f rs.\n",total_amt);
    }
    else
    {
        printf("enter a valid amount.");
        goto x;
    }
    printf("5%% GST applied on yur total amount.\n");
    final_amt=total_amt+(total_amt*5)/100;
    printf("your final amount is %.2f rs.\n",final_amt);
    printf("you are a registered member?\nif yes press 1 and if no press 0\n");
    scanf("%d",&ch);
    if (ch==1)
    {
        pay_amt=final_amt-(final_amt*5)/100;
        printf("you are eligible for extra 5%% discount.\nyour payable amount is %.2f rs.\n",pay_amt);
    }
    else if (ch==0)
    {
        pay_amt=final_amt;
        printf("no other discounts eligible for you.\nyou have to pay %.2f rs.\n",pay_amt);
    }
    else
    {
        printf("please enter a valid choice.\n");
    }
   a: printf("do you have any promo code?\n press 2 for yes and 3 for no.\n");
    scanf("%d",&choice);
    if (choice==2)
    {
        printf("enter code=");
        scanf("%d",&code);
        if (code==100)
        {
            amt=pay_amt-(pay_amt*5)/100;
            printf("you are eligible for extra 5%% discount.\nyou have to pay %.2f rs.",amt);
            printf("thankyou for shopping.\n");

        }
        else
        {
            printf("this is not a valid code.\n");
            goto a;
        }
    }
    else if (choice==3)
    {
        printf("thankyou for shopping.\n");
    }
    else
    {
        printf("please entaer a valid choice.\n");
    }
    printf("do you want check again?\npress 4 for yes and 5 for no.\n");
    scanf("%d",&repet);
    if (repet==4)
    {
        goto x;
    }
    else
    {
        printf("thankyou.\n");
    }
}
