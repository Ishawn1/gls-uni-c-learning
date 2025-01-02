#include <stdio.h>
int a;
int is_odd(int a);
int main(){
    printf("What is the number:");
    scanf("%d",&a);
    is_odd(a);
    return 0;
}
int is_odd(int a){
    if (a%2!=0){
        printf("Odd");
    }
    else {
        printf("Even");
    }
    return 0;
}