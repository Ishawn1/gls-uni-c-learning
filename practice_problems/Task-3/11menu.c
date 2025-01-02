#include <stdio.h>
int main(void){
    int fun;
    printf("Which way do you want to \n 1= Burger\n 2= Pizza\n 3= Sushi\n 4= Steak ");
    scanf("%d",&fun);
    switch (fun){
    case 1:
        printf("50");
        break;
    case 2:
        printf("150");
        break;
    case 3:
        printf("300");
        break;
    case 4:
        printf("500");
        break;
    default:
        break;
    }
}