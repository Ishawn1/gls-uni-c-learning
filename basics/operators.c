#include <stdio.h>

int main() {
    int a = 10, b = 5;
    int result;

    // Arithmetic Operators
    result = a + b;
    printf("a + b = %d\n", result);

    result = a - b;
    printf("a - b = %d\n", result);

    result = a * b;
    printf("a * b = %d\n", result);

    result = a / b;
    printf("a / b = %d\n", result);

    result = a % b;
    printf("a %% b = %d\n", result);

    // Relational Operators
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);


    return 0;
}