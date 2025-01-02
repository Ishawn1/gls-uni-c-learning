#include<stdio.h>
int main (void){
    int year, a;
    printf("year: \n");
    scanf("%d", &year);
    a=year%4;
    switch (a)
    {
    case 0:
        printf("leap year");
        break;
    
    default:
        printf("not leap year");
        break;
    }    
    }
