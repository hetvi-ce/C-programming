#include<stdio.h>
void main()
{
    int choice,ch,amt;
    x: printf("WElcome to Foodies resaurant.\nmenu is given here:\n");
    printf("1. Burger =150rs.\n2. Pizza =200 rs.\n3. Pasta =120 rs.\n4. Sandwich =100 rs.\n5.French Fries =80 rs.\n");
    printf("what do you want to order? enter number here:\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("you ordered a burger worth rs 150.\n");
            amt+=150;
            break;

        case 2:
            printf("you ordered a pizza woth rs 200.\n");
            amt+=200;
            break;

        case 3:
            printf("you ordered pasta worth rs 120.\n");
            amt+=120;
            break;

        case 4:
            printf("you ordered sandwich worth rs 100.\n");
            amt+=100;
            break;

        case 5:
            printf("you ordered french fries worth rs 80.\n");
            amt+=80;
            break;

        default :
            printf("enter a valid choice.\n");
            break;
    }
    printf("do you want to order anything else? if yes press 1 if no press 0");
    scanf("%d",&ch);
    if (ch==1)
    {
        goto x;
    }
    else if (ch==0)
    {
        printf("your total amount is %d\nthank you.\n",amt);
    }
    else
    {
        printf("choose a valid choice.\n");
    }

}
