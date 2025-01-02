/*      
   1
  121
 12321
1234321
 12321
  121
   1
*/
#include <stdio.h>
int main(void){
    int i, j,row=5;
    for (i=0;i<row;i++){
        for (j=0;j<(row-i)-1;j++){
            printf(" "); }
        for (j=1;j<i+1;j++){
            printf("%d",j);
        }
        for (j=i-1;j>0;j--){
            printf("%d",j);
        }
        printf("\n");
    }
    for (i=row-2;i>0;i--){
        for (j=0;j<(row-i)-1;j++){
            printf(" "); }
        for (j=1;j<i+1;j++){
            printf("%d",j);
        }
        for (j=i-1;j>0;j--){
            printf("%d",j);
        }
        printf("\n");
        }
        
}