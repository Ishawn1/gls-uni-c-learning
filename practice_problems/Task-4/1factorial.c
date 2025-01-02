#include <stdio.h>
int main(void){
    int i=1,n,fact=1;
    printf("Write n: ");
    scanf("%d",&n);
    while (i<=n){
        fact=fact*i;
        i++;
    }
    printf("%d",fact);
}