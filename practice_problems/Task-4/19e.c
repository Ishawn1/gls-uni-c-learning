/*
5
44
333
2222
11111
*/

#include <stdio.h>
int main(void){
    int i, j,k=5;
    for (i=1;i<=5;i++){
        for (j=1;j<=i;j++){
            printf("%d",k);
        }
        printf("\n");
        k--;
    }
}