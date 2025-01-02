#include <stdio.h>

int main()
{
    float r, h;
    printf("Enter radius:\n");
    scanf("%f", &r);
    printf("Enter height:\n");
    scanf("%f", &h);
    printf("The volume of cylinder is %f", 3.14*r*r*h);
    return 0;
}