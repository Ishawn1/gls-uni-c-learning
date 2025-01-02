#include <stdio.h>
int main(void){
	float v;
	printf("Your speed: \n");
	scanf("%f",&v);
	if(v>80?printf("You are over the speed limit\n"):printf("You are under the speed limit\n"));
}