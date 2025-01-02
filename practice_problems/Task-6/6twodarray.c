#include <stdio.h>
int main(){
    int num[3][3],i,j;
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("What is the number: ");
            scanf("%d",&num[i][j]);
            }
    }
    for (i=0;i<3;i++){
        printf("\n");
        for (j=0;j<3;j++){
            printf("%d ",num[i][j]);
            }
    }
}