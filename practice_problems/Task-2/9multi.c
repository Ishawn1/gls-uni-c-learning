#include <stdio.h>
int main(void){
    int i,n,multi=1,b;
    printf("Write n: ");
    scanf("%d",&n);
    i=n;
    while (i>0){
        b=i%10;
        i=i/10;
        multi=multi*b;
    }
    printf("%d",multi);
}