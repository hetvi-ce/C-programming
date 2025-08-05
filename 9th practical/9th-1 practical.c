#include<stdio.h>
void main()
{
    float amount,total_amount,final_amount;
    printf("enter your total amount=");
    scanf("%f",&amount);
    if (amount>=0 && amount<1000)
    {
        printf("no discounts applied.\n");
        printf("your total amount is %f \n",amount);
        printf("5%% GST applied on your total amount. \n");
        final_amount=amount+amount*5/100;
        printf("your final amount is %f \n",final_amount);
    }
    else if (amount>=1000 && amount<=5000)
    {
      printf("you got 10 percentage discount on your shopping.\n");
      total_amount=amount-amount*10/100;
      printf("your total amount is %f \n",total_amount);
      printf("5%% GST applied on your total amount\n");
      final_amount=total_amount+total_amount*5/100;
      printf("your final amount is %f \n",final_amount);
    }
    else if (amount>5000)
    {
        printf("you got 20 percentage discount on your shopping.\n");
        total_amount=amount-amount*20/100;
        printf("your total amount is %f \n",total_amount);
        printf("5%% GST applied on your total amount \n");
        final_amount=total_amount+total_amount*5/100;
        printf("your final amount is %f \n",final_amount);
    }
    else
    {
        printf("invalid inputs.");
    }

}
