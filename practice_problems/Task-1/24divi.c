#include <stdio.h>

int main()
{
    int a;
    printf("Enter number:\n");
    scanf("%d", &a);
    if(a%5==0 && a%3==0){
        printf("The number is divisible by 3 and 5.");
        }
        else{
            printf("The number is not divisible by 3 and 5.");
    }
    return 0;
}