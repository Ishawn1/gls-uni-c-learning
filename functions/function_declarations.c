#include <stdio.h>

// Function declarations
void greet();
int add(int a, int b);
double multiply(double x, double y);

int main() {
    greet();
    int sum = add(5, 3);
    double product = multiply(4.5, 2.0);
    printf("Sum: %d\n", sum);
    printf("Product: %.2f\n", product);
    return 0;
}

void greet() {
    printf("Hello, World!\n");
}

int add(int a, int b) {
    return a + b;
}

double multiply(double x, double y) {
    return x * y;
}