#include <stdio.h>

int main()
{
    float income, tax, pf, final;
    printf("Enter income: ");
    scanf("%f", &income);
    if(income<=250000){
        tax=0;
    }
    else if(income>250000 && income<=500000){
        tax= 0.05*(income-250000);
    }
    else if(income>500000 && income<=1000000){
        tax= 0.05*(500000-250000) + 0.2*(income-500000);
    }
    else {
        tax= 0.05*(500000-250000) + 0.2*(1000000-500000) + 0.3*(income-1000000);
    }
    pf=income*0.01;
    if(pf<1800){
        final= income-tax-(pf)*12;
        printf("your income after taxes and pf is: %f", final);
    }
    else{
        final= income-tax-(1800)*12;
        printf("your income after taxes and pf is: %f", final);
    }
} 
