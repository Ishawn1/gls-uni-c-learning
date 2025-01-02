#include <stdio.h>

int main() {
    int *ptr = NULL; // Initialize pointer to NULL

    // Check if the pointer is NULL before dereferencing
    if (ptr == NULL) {
        printf("Pointer is NULL, cannot dereference.\n");
    } else {
        printf("Value pointed to by ptr: %d\n", *ptr); // This will not be executed
    }

    int num = 100;
    ptr = &num;

    if (ptr != NULL) {
        printf("Now pointer is pointing to: %d\n", *ptr);
    }

    return 0;
}