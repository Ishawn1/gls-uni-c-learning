int main(void) {
    float percent;
    printf("Enter the student's academic percentage: ");
    scanf("%f", &percent);
    if (percent >= 90) {
        printf("Percentage: %f - full scholarship\n", percent);
    } else if (percent >= 80) {
        printf("Percentage: %f - partial scholarship (50 percent)\n", percent);
    } else if (percent >= 70) {
        printf("Percentage: %f - partial scholarship (25 percent)\n", percent);
    } else {
        printf("Percentage: %f - no scholarship\n", percent);
    }
}