#include <stdio.h>
int main(void){
    int i=1,n,a=0,b=1,fib=0;
    printf("Write n: ");
    scanf("%d",&n);
    printf("%d ", a);
    while (i<=n){
        fib=a+b;
        printf("%d ",fib);
        a=b;
        b=fib;
        i++;
    }
}