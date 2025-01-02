#include <stdio.h>
int b,n,sum=0, i;
int pal(int a);
int main(){
    printf("What is the number:");
    scanf("%d",&n);
    printf("%d",pal(n));
    return 0;
}
int pal(int a){
    i=n;
    while (i>0){
        b=i%10;
        i=i/10;
        sum=sum+b;
    }
    return sum;
}