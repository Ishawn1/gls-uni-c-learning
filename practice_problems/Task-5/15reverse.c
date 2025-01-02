#include <stdio.h>
int num, i, rev=0,z;
int pal(int a);
int main(){
    printf("What is the number:");
    scanf("%d",&num);
    z=num;
    printf("%d",pal(num));
    return 0;
}
int pal(int a){
    for(i=num;i>0;i = i/10){
        num=i%10;
        rev=rev*10+num;
    }
    return rev;
}