#include <stdio.h>
int main(void){
    int balance=0, flag=0,fun,buy;
    while(flag==0){
    printf("What do you want to Buy\n 1: Milk 27rs \n 2: Biscuits 50rs \n 3: Butter 60rs \n 4: Cheese 100rs \n 5: Checkout\n Enter Number: ");
    scanf("%d",&fun);
    switch (fun){
    case 1:
    printf("How much do you want to buy: ");
    scanf("%d",&buy);
    balance=balance+27*buy;
    printf("Your updated cart value is %d \n",balance);
    break;
    case 2:
    printf("How much do you want to buy: ");
    scanf("%d",&buy);
    balance=balance+50*buy;
    printf("Your updated cart value is %d \n",balance);
    break;
    case 3:
    printf("How much do you want to buy: ");
    scanf("%d",&buy);
    balance=balance+60*buy;
    printf("Your updated cart value is %d \n",balance);
    break;
    case 4:
    printf("How much do you want to buy: ");
    scanf("%d",&buy);
    balance=balance+100*buy;
    printf("Your updated cart value is %d \n",balance);
    case 5:
    flag=1;
    break;
    }
    }
    printf("Your final bill is %d",balance);
}