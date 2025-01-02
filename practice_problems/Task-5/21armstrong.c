#include <stdio.h>
int num, i, d,arm=0;
int pal(float a);
int main(){
    printf("What is your number: ");
    scanf("%d",&num);
    pal(num);
    return 0;
}
int pal(float a){
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