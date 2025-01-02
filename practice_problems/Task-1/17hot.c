#include <stdio.h>
int main(void){
    int temp;
    printf("What is the temperatures: \n");
    scanf("%d",&temp);
    if(temp<=25){
        printf("cold");
    }
    else if (temp<=50 && temp>25){
         printf("warm");
    }
    else if (temp>50){
         printf("hot");
    }
    
}