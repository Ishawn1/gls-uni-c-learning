#include <stdio.h>
int main(void){
    int num1,num2,num3,temp=0;
    printf("Which enter 3 number: ");
    scanf("%d %d %d",&num1,&num2,&num3);
    if (num1==num2 && num2 == num3)
    {
        temp+=3;
    }
    else if(num1==num2 || num2 == num3||num3==num1){
        temp+=2;
    }
    else{
        temp+=1;
    }
    switch (temp)
    {
    case 1:
        printf("Scalene");
        break;
    case 2:
        printf("Isosceles");
        break;
    case 3:
        printf("Equilateral");
        break;    
    default:
        break;
    }
}