#include <stdio.h>
int main() 
{
    int n1, n2,i=1,j=0,flag=0;
    printf("Enter number 1: ");
    scanf("%d", &n1);
    printf("Enter number 2:");
    scanf("%d", &n2);
    if(n1>n2){
        i=n1;
    }
    else{
        i=n2;
    }
    while(flag==0)
    {
        if(i%n1==0 && i%n2==0)
        {
            j=i;
            flag=1;
        }
        i++;
    }
    printf("Least Common multiple %d ",j);

    return 0;
}