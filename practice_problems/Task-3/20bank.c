#include <stdio.h>
int main(void){
    int balance=10000,fun, deposit, withdraw;
    printf("What task do you want to perform\n 1: Deposit \n 2: Withdraw \n 3: Balance inquiry \n ");
    scanf("%d",&fun);
    switch (fun){
    case 1:
    printf("How much do you want to deposit: ");
    scanf("%d",&deposit);
    balance=balance+deposit;
    printf("Your updated balance is %d \n",balance);
    break;
    case 2:
    printf("How much do you want to withdraw: ");
    scanf("%d",&withdraw);
    balance=balance-withdraw;
    printf("Your updated balance is %d \n",balance);
    break;
    case 3:
    printf("Your balance is %d \n",balance);
    break;
    }

}