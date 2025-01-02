#include <stdio.h>
int a,facti=1, i=1;
int fact(int a);
int main(){
    printf("What is the number:");
    scanf("%d",&a);
    fact(a);
    return 0;}
int fact(int a){
while (i<=a){
        facti=facti*i;
        i++;
    }
    printf("%d",facti);
    }