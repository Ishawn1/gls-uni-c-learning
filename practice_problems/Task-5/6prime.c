#include <stdio.h>
int a,prime, i;
int isprime(int);
int main(){
    printf("What is the number:");
    scanf("%d",&a);
    prime = isprime(a);
    if(prime==0){
        printf("this number is not prime");
    }
    else
        printf("this number is prime");
    return 0;
}
int isprime(int a){
    i = 2;
    while (i<=a/2)
    {
        if (a%i==0)
        {
            return 0;
        }
        else{
            i++;
        }
    }
    return 1;
}