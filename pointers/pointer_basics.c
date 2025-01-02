#include <stdio.h>

int main() {
    int num = 10;
    int *ptr; // Declare a pointer to an integer

    // Initialize the pointer with the address of num
    ptr = &num;

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);

    printf("Value of ptr (address of num): %p\n", ptr);
    printf("Value pointed to by ptr (dereferencing): %d\n", *ptr);

    // Modifying the value of num through the pointer
    *ptr = 20;
    printf("Value of num after modification through ptr: %d\n", num);

    return 0;
}