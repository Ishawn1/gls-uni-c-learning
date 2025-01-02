#include <stdio.h>
int main(void){
    int fun, num;
    float km,mile,inch,cm;
    printf("What is the number ");
    scanf("%d",&num);
    printf("Which way do you want to \n 1= miles to km\n 2= km to miles\n 3= inch to cm\n 4= cm to inch ");
    scanf("%d",&fun);
    switch (fun){
    case 1:
        km=num*1.609;
        printf("%f km",km);
        break;
    case 2:
        mile=num*0.621;
        printf("%f mile",mile);
        break;
    case 3:
        cm=num*2.54;
        printf("%f cm",cm);
        break;
    case 4:
        inch=num/2.54;
        printf("%f inch",inch);
        break;
    default:
        break;
    }
}