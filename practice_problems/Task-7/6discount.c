#include <stdio.h>

struct Product {
    int id;
    char name[50];
    float price;
    float discount;
};
int main() {
    struct Product products[5];
    float finalPrice[5];
    for (int i = 0; i < 5; i++) {
        printf("Enter details for product %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &products[i].id);
        printf("Name: ");
        scanf("%s", products[i].name);
        printf("Price: ");
        scanf("%f", &products[i].price);
        printf("Discount: ");
        scanf("%f", &products[i].discount);
        finalPrice[i] = products[i].price - products[i].discount;
    }
    printf("\nProducts with final price below $100:\n");
    for (int i = 0; i < 5; i++) {
        if (finalPrice[i] < 100) {
        printf("ID: %d, Name: %s, Final Price: %f\n", products[i].id, products[i].name, finalPrice[i]);
        }
    }
    return 0;
}