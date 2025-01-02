#include <stdio.h>
int main(void){
    int i=1,n,k=1;
    printf("Write n: ");
    scanf("%d",&n);
    while (i<=10){
        k=i*n;
        printf("%d * %d = %d \n",n,i,k);
        i++;
    }
}