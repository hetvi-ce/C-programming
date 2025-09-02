#include<stdio.h>
void main()
{
    int choice,ch,bqun=0,pqun=0,paqun=0,squn=0,fqun=0;
    float amt,btotal,ptotal,patotal,stotal,ftotal;
    x: printf("WElcome to Foodies resaurant.\nmenu is given here:\n");
    printf("1. Burger =150rs.\n2. Pizza =200 rs.\n3. Pasta =120 rs.\n4. Sandwich =100 rs.\n5.French Fries =80 rs.\n");
    printf("what do you want to order? enter number here:\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("you ordered a burger worth rs 150.\nenter quantity tou want=");
            scanf("%d",&bqun);
            btotal=bqun*150;
            amt+=150*bqun;
            break;

        case 2:
            printf("\nyou ordered a pizza woth rs 200.\nenter quantity tou want=");
            scanf("%d",&pqun);
            ptotal=pqun*200;
            amt+=200*pqun;
            break;

        case 3:
            printf("\nyou ordered pasta worth rs 120.\nenter quantity tou want=");
            scanf("%d",&paqun);
            patotal=pqun*120;
            amt+=120*paqun;
            break;

        case 4:
            printf("\nyou ordered sandwich worth rs 100.\nenter quantity tou want=");
            scanf("%d",&squn);
            stotal=squn*100;
            amt+=100*squn;
            break;

        case 5:
            printf("\nyou ordered french fries worth rs 80.\nenter quantity tou want=");
            scanf("%d",&fqun);
            ftotal=fqun*80;
            amt+=80*fqun;
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

    if (bqun>0)
    {
        printf("burger*%d=%.2f\n",bqun,btotal);
    }
     if (pqun>0)
    {
        printf("pizza*%d=%.2f\n",pqun,ptotal);
    }
     if (paqun>0)
    {
        printf("pasta*%d=%.2f\n",paqun,patotal);
    }
     if (squn>0)
    {
        printf("sandwich*%d=%.2f\n",squn,stotal);
    }
     if (fqun>0)
    {
        printf("frenchfries*%d=%f\n",fqun,ftotal);
    }
    if (amt>500)
    {
        printf("your total amount is %.2f",amt);
        printf("\nyou got 10%% discount on your total order.\nyou have to pay %.2f\n",amt-(amt*10)/100);
    }

}
