#include <stdio.h>
void main()
{
    int n;
    printf("Enter number of days: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Invalid number of days.\n");
        return;
    }
    int prices[n];
    printf("Enter prices for each day:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &prices[i]);
    }
    int minPrice = prices[0];
    int minDay = 0;
    int maxProfit = 0;
    int buyDay = 0;
    int sellDay = 0;
    for (int i = 1; i < n; i++)
    {
        if (prices[i] < minPrice)
        {
            minPrice = prices[i];
            minDay = i;
        }
        else
        {
            int profit = prices[i] - minPrice;
            if (profit > maxProfit)
            {
                maxProfit = profit;
                buyDay = minDay;
                sellDay = i;
            }
        }
    }
    if (maxProfit > 0)
    {
        printf("Maximum profit = %d\n", maxProfit);
        printf("Buy on day: %d\n", buyDay+1);
        printf("Sell on day: %d\n", sellDay+1);
    }
    else
    {
        printf("No profitable buy/sell pair found.\n");
    }
}
