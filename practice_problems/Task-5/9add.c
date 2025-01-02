#include <stdio.h>
float a, b,c;
float add(float a, float b);
int main(){
    printf("What is the number:");
    scanf("%f %f",&a,&b);
    c=add(a,b);
    printf("%f",c);
    return 0;
}
float add(float a, float b){
    return a+b;
}