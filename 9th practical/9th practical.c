#include<stdio.h>
void main()
{
    float amount,total_amount;
    printf("enter your total amount=");
    scanf("%f",&amount);
    if (amount>=0 && amount<1000)
    {
        printf("no discounts applied.\n");
    }
    else if (amount>=1000 && amount<=5000)
    {
      printf("you got 10 percentage discount on your shopping.\n");
      total_amount=amount-amount*10/100;
      printf("your total amount is %f \n",total_amount);
    }
    else if (amount>=5000)
    {
        printf("you got 20 percentage discount on your shopping.\n");
        total_amount=amount-amount*20/100;
        printf("your total amount is %f \n",total_amount);
    }
    else
    {
        printf("invalid inputs.");
    }
}
