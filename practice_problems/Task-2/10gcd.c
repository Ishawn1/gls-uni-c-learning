#include <stdio.h>
int main() 
{
    int n1, n2,i=1,j=0;
    printf("Enter number 1: ");
    scanf("%d", &n1);
    printf("Enter number 2:");
    scanf("%d", &n2);
    while(i<=n1 && i<=n2)
    {
        if(n1%i==0 && n2%i==0)
        {
            j=i;
        }
        i++;
    }
    printf("greatest common divisor %d ",j);

    return 0;
}