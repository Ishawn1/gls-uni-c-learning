#include <stdio.h>
int main(void){
    int num[10],i,pos=0,neg=0,zero=0;
    for (i=0;i<10;i++){
        printf("What is the number: ");
        scanf("%d",&num[i]);
    }
    for (i=0;i<10;i++){
        if (num[i]<0){
            neg++;
        }
        else if (num[i]>0) {
            pos++;
        }
        else{
            zero++;
        }
    }
    printf("positive numbers: %d\n negative numbers: %d \n Zero: %d\n ",pos, neg,zero);
}