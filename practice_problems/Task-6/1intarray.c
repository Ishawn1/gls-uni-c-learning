#include <stdio.h>
int main(void){
    int num[10],i,pos=0,neg=0;
    for (i=0;i<10;i++){
        num[i]=i+1;
    }
    for (i=0;i<10;i++){
        printf("%d, ",num[i]);
    }
}