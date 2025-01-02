#include <stdio.h>
#include <string.h>



struct Book {
    char title[100];
    char author[100];
    float price;
    int stock;
};
int main() {
    struct Book books[3];
    int i;
    for (i = 0; i < 3; i++) {
        printf("Enter details for book %d:\n", i + 1);
        printf("Title: ");
        gets(books[i].title);
        printf("Author: ");
        gets(books[i].author);
        printf("Price: ");
        scanf("%f", &books[i].price);
        printf("Stock: ");
        scanf("%d", &books[i].stock);
    }
    printf("\nBooks that are out of stock:\n");
    for (i = 0; i < 3; i++) {
        if (books[i].stock == 0) {
            printf("Title: %s\n", books[i].title);
            printf("Author: %s\n", books[i].author);
            printf("Price: %f\n", books[i].price);
            printf("\n");
        }
    }
    return 0;
}