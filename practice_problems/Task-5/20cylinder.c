#include <stdio.h>
float r,h, vol,cir;
float pal(float a, float b);
int main(){
    printf("What is the radius:");
    scanf("%f",&r);
    printf("What is the height:");
    scanf("%f",&h);
    pal(r,h);
    return 0;
}
float pal(float a,float b){
    vol=r*r*3.14*h;
    printf("volume= %f",vol);
}