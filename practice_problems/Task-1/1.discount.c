#include <stdio.h>
int main(void){
	float price, dis, final;
	printf("What is the price of the product: \n ");
	scanf("%f",&price);
	printf("What is the discount for the product: \n ");
	scanf("%f",&dis);
	dis=(price*dis)/100;
	final=price-dis;
	printf("Final price for the product: %f \n ", final);
}