#include <stdio.h>
int a, b;
int max(int a, int b);
int main(){
    printf("What is the number:");
    scanf("%d %d",&a,&b);
    printf("Max of two number is: %d ",max(a,b));
    return 0;
}
int max(int a, int b){
        if (a>b){
            return a;}
        else {
            return b;
        }
        }
        