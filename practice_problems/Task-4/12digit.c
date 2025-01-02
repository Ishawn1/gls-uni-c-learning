#include <stdio.h>
int main(void){
    int num, i, rev=0;
    printf("What is your number: ");
    scanf("%d",&num);
    for(i=num;i>0;i = i/10){
        rev++;
    }
    printf("%d",rev);
}