#include <stdio.h>
float r, area,cir;
float pal(float a);
int main(){
    printf("What is the number:");
    scanf("%f",&r);
    pal(r);
    return 0;
}
float pal(float a){
    area=r*r*3.14;
    printf("area= %f",area);
    cir=r*2*3.14;
    printf("Circumference= %f",cir);
}