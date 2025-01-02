#include <stdio.h>
int power(int a, int b);
int main (){
    int n,k,f;
    printf("Enter the number: ");
    scanf("%d %d",&n, &k);
    f= power(n,k);
    printf("the power is %d", f);
    return 0;
}
int power(int n, int k){
    if (k==0)
    {
        return 1;
    }
    else{
        return n*power(n,k-1);
    }

    
    
}