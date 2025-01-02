/*
*****
****
***
**
*
*/

#include <stdio.h>
int main(void){
    int i, j;
    for (i=5;i>0;i--){
        for (j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}