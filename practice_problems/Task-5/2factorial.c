#include <stdio.h>
int a,facti=1, i;
int fact(int a);
int main(){
    printf("What is the number:");
    scanf("%d",&a);
    fact(a);
    return 0;
}
int fact(int a){
    for (i=1 ;i<=a;i++){
        facti=facti*i;
    }
    printf("%d",facti);
    return 0;
}