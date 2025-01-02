#include <stdio.h>

int main(void) {
    int a, b, c, d, e,high,low,total;
    float avg;
    char grade;
    printf("Enter marks for five subjects:\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e );
    high = low = a;
    if (b > high) high = b;
    if (b < low) low = b;
    if (c > high) high = c;
    if (c < low) low = c;
    if (d > high) high = d;
    if (d < low) low = d;
    if (e > high) high = e;
    if (e < low) low = e;
    total =  a+ b + c + d + e;
    avg = total / 5.0;
    if (avg >= 90) {
        grade = 'A';
    } else if (avg >= 80) {
        grade = 'B';
    } else if (avg >= 70) {
        grade = 'C';
    } else if (avg >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }
    printf("\nHighest Mark: %d\n", high);
    printf("Lowest Mark: %d\n", low);
    printf("Avg Mark: %f\n", avg);
    printf("Grade: %c\n", grade);
}