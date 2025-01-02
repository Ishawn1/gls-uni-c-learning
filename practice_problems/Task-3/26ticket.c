#include <stdio.h>
int main(void){
    int balance=10000,fun;
    printf("What ticket do you want to buy\n 1: 1st AC 1000rs \n 2: 2nd AC 700rs \n 3: Sleeper 500rs\n ");
    scanf("%d",&fun);
    switch (fun){
    case 1:
    balance=balance-1000;
    printf("Your updated balance is %d \n",balance);
    break;
    case 2:
    balance=balance-700;
    printf("Your updated balance is %d \n",balance);
    break;
    case 3:
    balance=balance-500;
    printf("Your updated balance is %d \n",balance);
    break;
    }

}