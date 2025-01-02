#include <stdio.h>
#include <math.h>
int main(void){
    int num,fun;
    float result;
    printf("What is the number: ");
    scanf("%d",&num);
    printf("What task do you want to perform\n 1: square \n 2: cube \n 3: root \n ");
    scanf("%d",&fun);
    switch (fun){
        case 1:
        result=num*num;
        printf("%f",result);
        break;
        case 2:
        result=num*num*num;
        printf("%f",result);
        break;
        case 3:
        result=sqrt(num);
        printf("%f",result);
        break;
    }
}