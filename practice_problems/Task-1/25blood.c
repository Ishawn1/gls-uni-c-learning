#include <stdio.h>
int main(void){
    int age, weight;
    printf("What is your age: \n");
    scanf("%d",&age);
    printf("What is your weight: \n");
    scanf("%d",&weight);
    if (age>=18 && weight>40){
        printf("You are eligible to donate");
    }
    else {
        printf("You are not eligible to donate");
    }
}