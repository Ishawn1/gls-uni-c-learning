#include <stdio.h>

int main() {
    int values[] = {10, 20, 30, 40, 50};

    printf("Iterating through the array using a for loop:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element at index %d: %d\n", i, values[i]);
    }

    return 0;
}