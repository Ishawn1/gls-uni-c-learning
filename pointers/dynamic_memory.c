#include <stdio.h>
#include <stdlib.h> // For malloc and free

int main() {
    int *ptr;
    int n = 5;

    // Allocate memory for 5 integers using malloc
    ptr = (int *)malloc(n * sizeof(int));

    // Check if malloc was successful
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Indicate an error
    }

    printf("Memory allocated successfully.\n");

    // Use the allocated memory
    for (int i = 0; i < n; i++) {
        ptr[i] = (i + 1) * 10;
    }

    printf("Values stored in dynamically allocated memory: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Release the allocated memory using free
    free(ptr);
    printf("Memory freed.\n");


    return 0;
}