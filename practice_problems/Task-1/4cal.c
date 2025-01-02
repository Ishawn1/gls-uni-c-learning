#include <stdio.h>
int main(void){
	float a, b, result;
	char operation;
	printf("write both numbers: ");
	scanf("%f %f",&a, &b);

	printf("what operation do you want to perform: ");
	scanf(" %c",&operation);
	if(operation == '+'){
	result = a+b;
	printf("%f", result);
	}
	else if(operation == '-'){
	result = a-b;
	printf("%f", result);
	}
	else if(operation == '*'){
	result = a*b;
	printf("%f", result);
	}
	else if(operation == '/'){
	result = a/b;
	printf("%f", result);
	}
}

