#include <stdio.h>
int main(void){
	float p, n, r;
	printf("What is the principal: \n ");
	scanf("%f",&p);
	printf("What is the rate of interest: \n ");
	scanf("%f",&r);
	n=100/r;
	printf("Number of years: %f \n ",n);
	}