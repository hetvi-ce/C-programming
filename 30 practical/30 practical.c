#include <stdio.h>
int main() {
    int n;
    printf("ID No: 25CE105\n\n");
    printf("Enter number of items: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Error: \"No items to sort.\"\n");
        return 0;
    }

    float prices[n];
    float *ptr = prices;
    printf("Enter %d prices:\n", n);

    for (int i = 0; i < n; i++) {
        if (scanf("%f", (ptr + i)) != 1) {
            printf("Error: \"Invalid input for price. Please enter numeric values only.\"\n");
            return 0;
        }
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (*(ptr + j) > *(ptr + j + 1)) {
                float temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }
    printf("Sorted Prices: ");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", *(ptr + i));
    }
    printf("\n");
    return 0;
}
