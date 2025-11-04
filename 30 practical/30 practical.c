//#include<stdio.h>
//void main()
//{
//    int itm,i,*p,prices[20];
//    int min,temp;
//    printf("enter number of items : ");
//    scanf("%d",&itm);
//    p=prices;
//    for(i=0;i<itm;i++)
//    {
//        printf("\n enter prices for item %d : ",i+1);
//        scanf("%d",p);
//        p++;
//    }
//    min=p;
//    for(i=0;i<itm;i++)
//    {
//        if(min>prices[i])
//        {
//            temp=min;
//            min=prices[i];
//            prices[i]=min;
//        }
//        printf("\n%d",prices[i]);
//    }
//}
#include <stdio.h>

void main()
{
    int itm, i, j, temp;
    int *p, prices[20];
    printf("Enter number of items: ");
    scanf("%d", &itm);
    p = prices;
    for (i = 0; i < itm; i++)
    {
        printf("Enter price for item %d: ", i + 1);
        scanf("%d", (p + i));
    }
    for (i = 0; i < itm - 1; i++)
    {
        for (j = i + 1; j < itm; j++)
        {
            if (*(p + i) > *(p + j))
            {
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }
    printf("\nSorted prices in ascending order:\n");
    for (i = 0; i < itm; i++)
    {
        printf("%d ", *(p + i));
    }
    printf("\n");
}
