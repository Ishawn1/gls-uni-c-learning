#include <stdio.h>
int main(void){
    int fun, temp;
    float cel,fe;
    printf("What is the temp ");
    scanf("%d",&temp);
    printf("Which way do you want to go 0 is for cel to fe and 1 us for fe to cel ");
    scanf("%d",&fun);
    switch (fun)
    {
    case 0:
        fe= (temp*9/5)+32;
        printf("%f F",fe);
        break;
    case 1:
        cel= (temp-32)*5/9;
        printf("%f C",cel);
    default:
        break;
    }
}