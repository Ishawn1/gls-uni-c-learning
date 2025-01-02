#include <stdio.h>
int main(void){
    int num[50],i,n,small,large;
    printf("What is the Size of array: ");
        scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("What is the number: ");
        scanf("%d",&num[i]);
    }
    for (i=0;i<n;i++){
        if(large>num[i]){
        }
        else{
            large=num[i];
        }
        if(small<num[i]){
        }
        else{
            small=num[i];
        }
    }
    printf("Smallest = %d Largest = %d", small,large);
}