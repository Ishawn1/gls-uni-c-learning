#include <stdio.h>
int main(void){
    int num, i, rev=0;
    printf("What is your number: ");
    scanf("%d",&num);
    for(i=num;i>0;i = i/10){
        num=i%10;
        rev=rev*10+num;
    }
    printf("%d",rev);
}