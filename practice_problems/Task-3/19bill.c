#include <stdio.h>
int main(void){
    int fun;
    float price;
    printf("What is the amount of unit used ");
    scanf("%d",&fun);
    switch (fun){
        case 0 ... 50:
        price=fun*3.2;
        break;
        case 51 ... 150:
        price= 3.95*(fun-50)+50*3.2;
        break;
        default:
        price= 5*(fun-200)+3.95*(150)+50*3.2;
        break; 
    }
    printf("The cost of electricity: %f",price);
}