#include <stdio.h>
int main(void){
	float elec,water,inter,bill;
	printf("What is the electricity bill: \n ");
	scanf("%f",&elec);
	printf("What is the internet bill: \n ");
	scanf("%f",&inter);
	printf("What is the water bill: \n ");
	scanf("%f",&water);
	bill=elec+water+inter;
	printf("the total bill is:%f \n ",bill);
}