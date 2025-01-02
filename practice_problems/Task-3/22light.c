#include <stdio.h>

int main(void) {
    int light;
    printf("Enter a number for the traffic light color:\n 1: Red\n 2: Yellow \n 3: Green\n");
    scanf("%d", &light);
    switch (light) {
        case 1:
            printf("The traffic light is Red. Stop!\n");
            break;
        case 2:
            printf("The traffic light is Yellow. Get Ready!\n");
            break;
        case 3:
            printf("The traffic light is Green. Go!\n");
            break;
        default:
            printf("Invalid input! Please enter 1, 2, or 3.\n");
            break;
    }
}