#include <stdio.h>
int main(){
    int num1[3][3],i,j,k,num2[3][3],total[3][3];
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("What is the number1: ");
            scanf("%d",&num1[i][j]);
            }
    }
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("What is the number2: ");
            scanf("%d",&num2[i][j]);
            }
    }
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            total[i][j]=0;
            }
    }
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            for(k=0;k<3;k++){
            total[i][j]=total[i][j]+num1[i][k]*num2[k][j];
            }
        }
    }
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("%d ", total[i][j]);
            }
            printf("\n");
    }
}