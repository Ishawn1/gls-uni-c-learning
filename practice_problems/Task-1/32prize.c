#include <stdio.h>

int main(void) {
    float score;
    int awards;
    printf("Enter the students score: ");
    scanf("%f", &score);
    
    printf("the number of awards won: ");
    scanf("%d", &awards);
    if (score >= 85 && awards >= 3) {
        printf("The student is eligible for a cash prize\n");
    } else if (score >= 90 && awards >= 1) {
        printf("The student is eligible for a cash prize\n");
    } else {
        printf("The student is not eligible for a cash prize.\n");
    }
}