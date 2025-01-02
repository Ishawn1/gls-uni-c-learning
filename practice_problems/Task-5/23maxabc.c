#include <stdio.h>
int a, b,c;
int max(int a, int b,int c);
int main(){
    printf("What is the numbers:");
    scanf("%d %d",&a,&b,&c);
    printf("Max of three number is: %d ",max(a,b,c));
    return 0;
}
int max(int a, int b,int c){
    int larg = (a>b && a>c)?(a):((b>c)?b:c);
    return larg;
}
       
        