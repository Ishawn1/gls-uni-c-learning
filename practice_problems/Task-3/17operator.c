#include <stdio.h>
int main(void){
    char fun;
    printf("Which operator ");
    scanf("%c",&fun);
    switch (fun){
    case '+':case '-':case '*':case '/':
        printf("Valid");
        break;
    default:
        printf("Not valid");
        break;
    }
}