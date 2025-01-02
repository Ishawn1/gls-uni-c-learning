#include <stdio.h>
int main(void){
    float unit, price;
    printf("Enter units consumed: ");
    scanf("%f", &unit);
    if(unit<=50){
        price=unit*3.2;
    }
    else if(unit>50 && unit<=200){
        price= 3.95*(unit-50)+50*3.2;
    }
    else {
        price= 5*(unit-200)+3.95*(150)+50*3.2;
}
    printf("The bill is: %f", price);
}