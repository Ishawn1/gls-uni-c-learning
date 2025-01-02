#include <stdio.h>
int main (void){
    int num, a;
    printf("num: \n");
    scanf("%d", &num);
    a=num%2;
    switch (a)
    {
    case 0:
        printf("Even");
        break;
    
    default:
        printf("Odd");
        break;
    }    
    }
