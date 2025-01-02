#include <stdio.h>

int main() {
    // Declaring an array without initialization
    int numbers[5];

    // Initializing an array with specific values during declaration
    int grades[3] = {90, 85, 92};

    // Partially initializing an array 
    int scores[5] = {10, 20};

    // Implicitly sizing an array based on the initializer list
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};

    // Printing the arrays
    printf("Numbers: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]); 
    }
    printf("\n");

    printf("Grades: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", grades[i]);
    }
    printf("\n");

    printf("Scores: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", scores[i]);
    }
    printf("\n");

    printf("Vowels: ");
    for (int i = 0; i < 5; i++) {
        printf("%c ", vowels[i]);
    }
    printf("\n");

    return 0;
}