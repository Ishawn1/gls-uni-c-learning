#include <stdio.h>
int main(void){
	float v,l,t;
	printf("distance traveled: \n");
	scanf("%f",&l);
	printf("time taken: \n");
	scanf("%f",&t);
	v=l/t;
	printf("your speed is: %f",v);
}