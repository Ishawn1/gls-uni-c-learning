#include <stdio.h>
int main(){
    int num1[3][3],i,j,num2[3][3],total=0;
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("What is the number1: ");
            scanf("%d",&num1[i][j]);
            }
    }
    
    
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            if(i==j){
            total=num1[i][j]+total;
            }
        }
    }
            printf("Sum is: %d ",total);
            
    
}