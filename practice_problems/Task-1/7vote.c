#include <stdio.h>
int main(void){
    int age;
    printf("What is your age: \n");
    scanf("%d",&age);
    if (age>=18){
        printf("You are eligible to vote");
    }
    else {
        printf("You are not eligible to vote");
    }
}