#include <stdio.h>

// Function declarations
int add(int a, int b);

int main() {
    int sum = add(5, 3);
    printf("Sum: %d\n", sum);

    printf("Sum: %d\n", add(10, 20));
    return 0;
}

// Function definitions
int add(int a, int b) {
    return a + b;
}

void printMessage(char *message) {
    printf("%s\n", message);
}