#include <stdio.h>
int n1, n2,i=1,j=0,flag=0;
int gcd(int a, int b);
int main(){
    printf("What is the number:");
    scanf("%d %d",&n1,&n2);
    printf("lcm of two number is: %d ",gcd(n1,n2));
    return 0;
}
int gcd(int a, int b) 
{
   if(n1>n2){
        i=n1;
    }
    else{
        i=n2;
    }
    while(flag==0)
    {
        if(i%n1==0 && i%n2==0)
        {
            j=i;
            flag=1;
        }
        i++;
    }

    return j; 
}
