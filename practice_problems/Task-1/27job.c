#include <stdio.h>

int main()
{
    int exp,cert;
    printf("Enter experience:\n");
    scanf("%d", &exp);
    printf("Enter number of certificate:\n");
    scanf("%d", &cert);
    if(exp>=5 && cert>=3){
        printf("You are eligible for the job");
    }
    else{
        printf("You are not eligible for the job");
    }
}