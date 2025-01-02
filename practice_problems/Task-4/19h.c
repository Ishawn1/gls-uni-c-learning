/*
    1 
   1 1
  1 2 1
 1 3 3 1
 */
#include <stdio.h>
int main() {
   int r=4,a=1,s,i,j;
   for(i=0;i<r;i++){
      for(s=1;s<=r-i;s++)
         printf(" ");
      for(j=0;j<=i;j++){
         if (j==0||i==0)
            a=1;
         else
            a=a*(i-j+1)/j;
         printf("%d ",a);
      }
      printf("\n");
   }
   return 0;
}