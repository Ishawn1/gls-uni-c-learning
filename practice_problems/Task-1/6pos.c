#include <stdio.h>
int main(void){
	float p;
	printf("num:\n ");
	scanf("%f",&p);
	if(p>0){
		printf("The number is positive\n");
	}
	else if (p<0){
		printf("The number is negative\n");
	}
	else{
		printf("The number is zero\n");
	}
}