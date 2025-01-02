#include <stdio.h>
#include <ctype.h>
int main(void){
    char word ,lower,upper;
    int fun;
    printf("What is the letter ");
    scanf("%c",&word);
    printf("Which way do you want to go 0 is for upper to lower and 1 us for lower to upper ");
    scanf("%d",&fun);
    switch(fun){
        case 0:
        lower = tolower(word);
        printf("%c",lower);
        break;
        case 1:
        upper = toupper(word);
        printf("%c",upper);
        break;
        default:
        printf("enter either 1 or 2");
    }

}