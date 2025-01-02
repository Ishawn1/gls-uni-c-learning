#include <stdio.h>
int binary(int a);
int main (){
    int n,f;
    printf("Enter the number: ");
    scanf("%d",&n);
    f= binary(n);
    printf("the the binary is %d", f);
    return 0;
}
int binary(int n){
    if (n==0)
    {
        return 0;
    }
    else{
        return n%2 + 10*binary(n/2);
    }

    
    
}