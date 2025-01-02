#include <stdio.h>
int a, b;
int gcd(int a, int b);
int main(){
    printf("What is the number:");
    scanf("%d %d",&a,&b);
    printf("Gcd of two number is: %d ",gcd(a,b));
    return 0;
}
int gcd(int a, int b) 
{
    int i=1,j=0;
    while(i<=a && i<=b)
    {
        if(a%i==0 && b%i==0)
        {
            j=i;
        }
        i++;
    }
    return j;
}
