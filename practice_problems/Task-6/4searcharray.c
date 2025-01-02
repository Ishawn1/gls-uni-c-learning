#include <stdio.h>
int main(void){
    int num[10],i,find,position=-1;
    for (i=0;i<10;i++){
        printf("What is the number: ");
        scanf("%d",&num[i]);
    }
    printf("What do you want to find: ");
        scanf("%d",&find);
    for (i=0;i<10;i++){
        if (num[i]==find){
            position=i;
        }
    }
    if(position==-1){
        printf("The number is not present");
    }
    else{
    printf(" the index is %d\n",position);
    }
}