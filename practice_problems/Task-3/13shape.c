#include <stdio.h>
int main(void){
    int fun, num;
    float result;
    printf("Which way do you want to \n 1= Area of cirle\n 2= Area of sphere\n 3= circumference of circle\n 4= area of square \n ");
    scanf("%d",&fun);
    printf("What is the number ");
    scanf("%d",&num);
    switch (fun){
    case 1:
        result=num*num*3.14;
        printf("%f",result);
        break;
    case 2:
        result=num*num*num*4/3;
        printf("%f",result);
        break;
    case 3:
        result=2*num*3.14;
        printf("%f",result);
        break;
    case 4:
        result=num*num;
        printf("%f",result);
        break;
    }
}