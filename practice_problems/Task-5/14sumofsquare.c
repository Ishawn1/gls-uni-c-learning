#include <stdio.h>
int a,square, i;
int sq(int a);
int main(){
    printf("What is the number:");
    scanf("%d",&a);
    sq(a);
    return 0;
}
int sq(int a){
    square= a*(a+1)*(2*a+1)/6;
    printf("%d",square);
    return 0;
}