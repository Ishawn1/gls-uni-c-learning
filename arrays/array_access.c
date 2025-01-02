#include <stdio.h>

int main() {
    int data[] = {100, 200, 300, 400, 500};

    // Accessing elements using their index
    printf("Element at index 0: %d\n", data[0]);
    printf("Element at index 2: %d\n", data[2]);
    printf("Element at index 4: %d\n", data[4]);



    // Modifying an array element
    data[1] = 250;
    printf("Element at index 1 after modification: %d\n", data[1]);

    return 0;
}