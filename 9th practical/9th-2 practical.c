#include<stdio.h>
void main()
{
    float amount,total_amount,final_amount,payable_amount;
    int ans;
    printf("enter your total amount=");
    scanf("%f",&amount);
    if (amount>=0 && amount<1000)
    {
        printf("no discounts applied.\n");
        printf("your total amount is %f \n\n",amount);
        printf("5%% GST applied on your total amount. \n");
        final_amount=amount+amount*5/100;
        printf("your final amount is %f \n",final_amount);
    }
    else if (amount>=1000 && amount<=5000)
    {
      printf("you got 10 percentage discount on your shopping.\n");
      total_amount=amount-amount*10/100;
      printf("your total amount is %f \n\n",total_amount);
      printf("5%% GST applied on your total amount\n");
      final_amount=total_amount+total_amount*5/100;
      printf("your final amount is %f \n",final_amount);
    }
    else if (amount>5000)
    {
        printf("you got 20 percentage discount on your shopping.\n");
        total_amount=amount-amount*20/100;
        printf("your total amount is %f \n\n",total_amount);
        printf("5%% GST applied on your total amount \n");
        final_amount=total_amount+total_amount*5/100;
        printf("your final amount is %f \n",final_amount);
    }
    else
    {
        printf("invalid inputs.");
    }
    printf("\n if you are a registered number, you got 5%% extra discount. \n");
    printf("if you are a registered number press 1, if not press 0 \n");
    scanf("%d",&ans);
    if (ans==1)
    {
        printf("you are able to got 5%% discount.\n");
        payable_amount=final_amount-final_amount*5/100;
        printf("your payable amount is %f \n",payable_amount);
    }
    else if (ans==0)
    {
        printf("you are not able to get discount.\n");
        printf("your payable amount is %f\n",final_amount);
    }
    else
    {
        printf("invalid input.\n");
    }
}
