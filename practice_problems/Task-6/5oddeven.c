#include <stdio.h>
int main(void){
    int num[10],i,odd=0,even=0;
    for (i=0;i<10;i++){
        printf("What is the number: ");
        scanf("%d",&num[i]);
    }
    for (i=0;i<10;i++){
        if (num[i]%2==0){
            even++;
        }
        else {
            odd++;
        }
    }
    printf("Even numbers: %d\n Odd numbers: %d",even, odd);
}