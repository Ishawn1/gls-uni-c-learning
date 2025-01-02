#include <stdio.h>

// Function to print the elements of an array
void printArray(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to modify the first element of an array
void modifyFirstElement(int arr[]) {
    arr[0] = 100;
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = 5;

    printArray(numbers, size); // Passing the array and its size to the function

    modifyFirstElement(numbers);
    printf("Array after modifying the first element: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}