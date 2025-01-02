#include <stdio.h>
int main(void){
    int i=0,n,k;
    printf("Write n: ");
    scanf("%d",&n);
    while (i<=n){
        printf("%d+", i);
        k=i+k;
        i++;
    }
printf("=%d", k);
}