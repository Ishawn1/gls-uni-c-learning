#include <stdio.h>
int main(void){
    int num, i, d,arm=0;
    printf("What is your number: ");
    scanf("%d",&num);
    for(i=num;i>0;i = i/10){
        d=i%10;
        d=d*d*d;
        arm=arm+d;
    }
    if (arm==num){
        printf("This number is armstrong number");
    }
    else{
        printf("This number is not armstrong number");
    }

}