#include <stdio.h>
int main(void){
    int i;
    double sum=0;
    for (i=1;i<=50;i++){
        sum=sum+i;
    }
    printf("%lf",sum);
}