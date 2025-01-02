#include <stdio.h>
int main(void){
    int age;
    printf("What is your age: \n");
    scanf("%d",&age);
    if(age<=12){
        printf("You are a child");
    }
    else if (age<=18 && age>12){
         printf("You are a teenager");
    }
    else if (age<=60 && age>18){
         printf("You are a adult");
    }
    else if (age>60){
         printf("You are a senior citizen");
    }
}