#include <stdio.h>
int main(void){
    int i,n,sum=0,b;
    printf("Write n: ");
    scanf("%d",&n);
    i=n;
    while (i>0){
        b=i%10;
        i=i/10;
        sum=sum+b;
    }
    printf("%d",sum);
}