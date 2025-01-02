#include <stdio.h>
int main(void){
    int i,num;
    double fact=0;
    for (i=1;i<=20;i++){
        num=i;
        num=num*num;
        fact= fact + num;
    }
    printf("%lf",fact);
}