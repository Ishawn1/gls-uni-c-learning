#include <stdio.h>
int main(void){
    int i,n,b=0;
    printf("Write n: ");
    scanf("%d",&n);
    i=n;
    while (i>0){
        i=i/10;
        b++;
    }
    printf("%d",b);
}