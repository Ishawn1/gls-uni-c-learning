/*      
     *
    ***
   *****
  *******
 *********
***********
*/
#include <stdio.h>
int main(void){
    int i, j,row=7;
    for (i=0;i<row;i++){
        for (j=0;j<(row-i)-1;j++){
            printf(" "); }
        for (j=0;j<i;j++){
            printf("*");
        }
        for (j=0;j<i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    }