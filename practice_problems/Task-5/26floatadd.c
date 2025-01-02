#include <stdio.h>
float a, b;
float add(float a, float b);
int main(){
    printf("What is the number:");
    scanf("%f %f",&a,&b);
    printf("Max of two number is: %f ",add(a,b));
    return 0;
}
float add(float a, float b){
        return a+b;
        }
        