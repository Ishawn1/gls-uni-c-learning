#include <stdio.h>
int main(void){
    int earning, marks;
    printf("What is your yearly earnings(in lakhs): \n");
    scanf("%d",&earning);
    printf("What are your marks: \n");
    scanf("%d",&marks);
    if(earning<5 && marks>=90){
        printf("You are qualified for the scholarship");
    }
    else{
        printf("You are not qualified for the scholarship");
    }
}
