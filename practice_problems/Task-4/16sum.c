#include <stdio.h>
int main(void){
    int i,n,sum=0,b;
    printf("Write n: ");
    scanf("%d",&n);
    for (i=n;i>0;i=i/10){
        b=i%10;
        sum=sum+b;
    }
    printf("%d",sum);
}