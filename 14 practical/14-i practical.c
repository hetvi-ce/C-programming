#include<stdio.h>
void main()
{
    float withdraw,rem_bal,dep,new_bal;
    int ch;
    printf("your curren balance is 5000 rs.");
    printf("do you want to deposit or withdraw?\n press 1 for deposit and press 0 for withdraw");
    scanf("%d",&ch);
   if (ch==0)
    {
        printf("\nyour how much amount you want to withdraw=");
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
    else if (ch==1)
    {
            printf("how much amount do you want to deposit=");
            scanf("%f",&dep);
            if (dep>0)
            {
                    new_bal=5000+dep;
                    printf("your new balance is %.2f",new_bal);
            }
            else
            {
                printf("invalid input.");
            }
    }
    else("invalid input");
}
