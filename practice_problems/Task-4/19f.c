/*
A
AB
ABC
ABCD
*/

#include <stdio.h>
int main(void){
    char i, j;
    for (i='A';i<='D';i++){
        for (j='A';j<=i;j++){
            printf("%c",j);
        }
        printf("\n");
    }
}