#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; // Pointer points to the first element of the array

    printf("Address of arr[0]: %p, Value: %d\n", ptr, *ptr);

    // Incrementing the pointer to point to the next element
    ptr++;
    printf("Address of arr[1]: %p, Value: %d\n", ptr, *ptr);

    ptr += 2; // Incrementing by 2 to point to arr[3]
    printf("Address of arr[3]: %p, Value: %d\n", ptr, *ptr);

    // Decrementing the pointer
    ptr--;
    printf("Address of arr[2]: %p, Value: %d\n", ptr, *ptr);

    return 0;
}