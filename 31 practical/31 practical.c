#include <stdio.h>
#include <stdlib.h>
int main() {
    char *summary;
    int size1, size2;
    printf("ID No: 25CE105\n\n");
    printf("Enter initial summary size: ");
    scanf("%d", &size1);
    getchar();
    summary = (char *)calloc(size1, sizeof(char));
    if (summary == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Enter initial summary: ");
    fgets(summary, size1, stdin);

    printf("\nInitial Summary: %s\n", summary);

    printf("Enter new size to extend summary: ");
    scanf("%d", &size2);
    getchar();

    summary = (char *)realloc(summary, size2 * sizeof(char));
    if (summary == NULL) {
        printf("Memory reallocation failed.\n");
        return 1;
    }

    printf("Enter updated/longer summary: ");
    fgets(summary, size2, stdin);

    printf("\nUpdated Summary: %s\n", summary);

    free(summary);
    return 0;
}
