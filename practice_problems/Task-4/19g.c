/* A 
  B B
 C C C
D D D D
*/
#include <stdio.h>
int main(void){
    int i,row='E';
    char j;
    for (i='A';i<row;i++){
        for (j=0;j<(row-i)-1;j++){
            printf(" "); }
        for (j='A';j<i+1;j++){
            printf("%c ",i);
        }
        printf("\n");
    }}