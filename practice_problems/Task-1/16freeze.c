#include <stdio.h>

int main()
{
    float c;
    printf("Enter temperature:\n");
    scanf("%f", &c);
    if(c<0){
    	printf("You are below freezing\n");
    }
    else{
    	printf("You are above freezing\n");
    }
}