#include <stdio.h>
int fibo(int a);
int main (){
    int n,f;
    printf("Enter the number: ");
    scanf("%d",&n);
    f= fibo(n);
    printf("the fibonacci is %d", f);
    return 0;
}
int fibo(int n){
    if (n==0)
    {
        return 0;
    }
    else if (n==1)
    {
        return 1;
    }
    else{
        return fibo(n-1)+fibo(n-2);
    }

    
    
}