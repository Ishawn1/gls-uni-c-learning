#include <stdio.h>
int a,cubes, i;
int cube(int a);
int main(){
    printf("What is the number:");
    scanf("%d",&a);
    cube(a);
    return 0;
}
int cube(int a){
    cubes= a*a*(a+1)*(a+1)/4;
    printf("%d",cubes);
    return 0;
}