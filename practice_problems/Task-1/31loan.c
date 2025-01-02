#include <stdio.h>

int main(void) {
    float income, expenses, percent;
    printf("Enter your monthly income: ");
    scanf("%f", &income);  
    printf("Enter your monthly expenses: ");
    scanf("%f", &expenses); 
    printf("Enter your academic percentage: ");
    scanf("%f", &percent);
    if(expenses<income){
        if(percent >= 90){
            printf("You are eligible for full loan");
        }
        else if(percent >=80)
            printf("You are eligible for partial loan(75 percent)");
        else if(percent >=70)
            printf("You are eligible for partial loan(50 percent)");
        else
            printf("You are eligible for partial loan(35 percent)");
    }
    else{
        printf("You are not eligible for loan");
    }
}