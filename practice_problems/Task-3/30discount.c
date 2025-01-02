#include <stdio.h>
int main(void){
    int fun, num;
    float dis;
    printf("What is the cost ");
    scanf("%d",&num);
    printf("What is the discount\n 1: 10 percent \n 2: 25 percent \n 3: 50 percent \n 4: 75 percent \n Enter Number: ");
    scanf("%d",&fun);
    switch (fun)
    {
    case 1:
        dis= num*0.10;
        num= num - dis;
        printf("%d",num);
        break;
    case 2:
        dis= num*0.25;
        num= num - dis;
        printf("%d",num);
        break;
    case 3:
        dis= num*0.50;
        num= num - dis;
        printf("%d",num);
        break;
    case 4:
        dis= num*0.75;
        num= num - dis;
        printf("%d",num);
        break;
    }
}