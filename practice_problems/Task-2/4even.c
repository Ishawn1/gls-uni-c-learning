#include <stdio.h>
int main(void){
    int i=1,n;
    printf("Write n: ");
    scanf("%d",&n);
    while (i<=n){
       if(i%2==0){
        printf("%d \n", i);
       }
        i++;
    }

}