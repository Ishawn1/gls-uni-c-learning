#include <stdio.h>

int main()
{
    float c, f;
    printf("Enter temperature:\n");
    scanf("%f", &c);
    f=(9*c)/5 + 32;
    printf("The temperature in fahrenheit is %f", f);
    return 0;
}