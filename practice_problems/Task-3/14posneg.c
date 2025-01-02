#include <stdio.h>
int main(void){
    int num, temp;
    printf("What is the num ");
    scanf("%d",&num);
    if (num==0)
    {
        printf("Number is zero");
    }
    else{
        if (num>0){
            temp=1;
        }
        else {
            temp=2;
        }
    switch(temp)
    {

    case 1:
        printf("Number is positive");
        break;
    case 2:
        printf("Number is negative");
    default:
        break;
    }   
    }
}