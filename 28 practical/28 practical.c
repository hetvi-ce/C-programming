#include <stdio.h>
union BookDetails {
    char title[50];
    char author[50];
    float price;
    int issuedFlag;
};
struct Book {
    int accessionNo;
    union BookDetails detail;
};
int main() {
    struct Book b;

    printf("ID No: 25CE105\n\n");
    printf("Enter accession number: ");
    scanf("%d", &b.accessionNo);
    getchar();

    printf("\nEnter book title: ");
    fgets(b.detail.title, sizeof(b.detail.title), stdin);
    printf("Title: %s\n", b.detail.title);

    printf("Enter author name: ");
    fgets(b.detail.author, sizeof(b.detail.author), stdin);
    printf("Author: %s\n", b.detail.author);

    printf("Enter price: ");
    scanf("%f", &b.detail.price);
    printf("Price: %.2f\n", b.detail.price);

    printf("Enter issued flag (1 = issued, 0 = available): ");
    scanf("%d", &b.detail.issuedFlag);
    printf("Issued: %d\n", b.detail.issuedFlag);

    return 0;
}
