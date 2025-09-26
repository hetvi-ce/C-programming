#include <stdio.h>
void main()
{
    int n;
    printf("Enter number of days: ");
    scanf("%d",&n);
    if (n<=0)
    {
        printf("Invalid number of days.\n");
    }
    int prices[n];
    printf("Enter prices for each day:\n");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&prices[i]);
    }
    int minPrice=prices[0];
    int maxProfit=0;
    for (int i=1;i<n;i++)
    {
        if (prices[i]<minPrice)
        {
            minPrice=prices[i];
        }
        else
        {
            int profit=prices[i]-minPrice;
            if (profit>maxProfit)
            {
                maxProfit=profit;
            }
        }
    }
    printf("Maximum profit = %d\n", maxProfit);
}
