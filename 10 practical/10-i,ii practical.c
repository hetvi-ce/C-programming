#include<stdio.h>
void main()
{
    int choice,ch,quan;
    float amt;
    x: printf("WElcome to Foodies resaurant.\nmenu is given here:\n");
    printf("1. Burger =150rs.\n2. Pizza =200 rs.\n3. Pasta =120 rs.\n4. Sandwich =100 rs.\n5.French Fries =80 rs.\n");
    printf("what do you want to order? enter number here:\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("you ordered a burger worth rs 150.\nenter quantity tou want=");
            scanf("%d",&quan);
            amt+=150*quan;
            break;

        case 2:
            printf("\nyou ordered a pizza woth rs 200.\nenter quantity tou want=");
            scanf("%d",&quan);
            amt+=200*quan;
            break;

        case 3:
            printf("\nyou ordered pasta worth rs 120.\nenter quantity tou want=");
            scanf("%d",&quan);
            amt+=120*quan;
            break;

        case 4:
            printf("\nyou ordered sandwich worth rs 100.\nenter quantity tou want=");
            scanf("%d",&quan);
            amt+=100*quan;
            break;

        case 5:
            printf("\nyou ordered french fries worth rs 80.\nenter quantity tou want=");
            scanf("%d",&quan);
            amt+=80*quan;
            break;

        default :
            printf("enter a valid choice.\n");
            break;
    }
    printf("\ndo you want to order anything else? if yes press 1 if no press 0");
    scanf("%d",&ch);
    if (ch==1)
    {
        goto x;
    }
    else if (ch==0)
    {
        printf("your total amount is %.2f.\nthank you.\n",amt);
    }
    else
    {
        printf("choose a valid choice.\n");
    }
}
