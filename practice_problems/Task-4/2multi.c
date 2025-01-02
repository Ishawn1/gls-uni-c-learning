#include <stdio.h>
int main(void){
    int i;
    double fact=1;
    for (i=1;i<=10;i++){
        fact=fact*i;
    }
    printf("%lf",fact);
}