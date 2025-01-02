#include <stdio.h>
#include <math.h>
int main(void){
    int num,fun;
    float result;
    printf("What is the number: ");
    scanf("%d",&num);
    printf("What task do you want to perform\n 1: Perimeter of square \n 2: Area of square\n ");
    scanf("%d",&fun);
    switch (fun){
        case 1:
        result=num*4;
        printf("%f",result);
        break;
        case 2:
        result=num*num;
        printf("%f",result);
        break;
    }
}