#include <stdio.h>
int a,prime,k, i,sum=2;
int isprime(int);
int main(){
    printf("What is the number:");
    scanf("%d",&a);
    prime = isprime(a);
}
int isprime(int a){
    i = 2;
    int x=2;
    while(x<=a){
    while (i<x)
    {
        if (x%i==0)
        {
         k=0;
         break;
        }
        else{
            i++;
        }
        k=1;

    }
    i = 2;
    if (k==1){
        sum=sum+x;
    }
    x++;
    }
    printf("%d",sum);
}