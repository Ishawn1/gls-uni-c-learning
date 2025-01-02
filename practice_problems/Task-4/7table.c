#include <stdio.h>
int main(void){
    int i,n=7,k=1;
    for (i=1;i<=10;i++){
        k=i*n;
        printf("%d * %d = %d \n",n,i,k);
    }
}