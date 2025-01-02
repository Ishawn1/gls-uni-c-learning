#include <stdio.h>
int a;
int ist(int a);
int main(){
    printf("What is the number:");
    scanf("%d",&a);
    ist(a);
    return 0;
}
int ist(int a){
    if (a>0){
        printf("positive");
    }
    else if (a==0){
        printf("zero");
    }
    else {
        printf("negative");
    }
    return 0;
}