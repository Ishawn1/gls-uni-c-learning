#include <stdio.h>
struct Car {
    char brand[50];
    int year;
    float price;
};
int main() {
    struct Car myCar;
    printf("Enter the brand of the car: ");
    scanf("%s", myCar.brand);
    printf("Enter the year of the car: ");
    scanf("%d", &myCar.year);
    printf("Enter the price of the car: ");
    scanf("%f", &myCar.price);
    printf("\nCar Details:\n");
    printf("Brand: %s\n", myCar.brand);
    printf("Year: %d\n", myCar.year);
    printf("Price: %f\n", myCar.price);
    return 0;
}