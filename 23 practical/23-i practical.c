#include <stdio.h>

void main() {
    int n;
    printf("Enter number of days: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid number of days.\n");
        return;
    }

    int prices[n];
    printf("Enter prices for each day:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }

    int maxProfit = 0;
    for (int i = 1; i < n; i++) {
        if (prices[i] > prices[i - 1]) {
            maxProfit += prices[i] - prices[i - 1];
        }
    }

    printf("Maximum total profit = %d\n", maxProfit);
}
