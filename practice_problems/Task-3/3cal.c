#include <stdio.h>
int main(void){
	float a, b, result;
	char operation;
	printf("write both numbers: ");
	scanf("%f %f",&a, &b);

	printf("what operation do you want to perform: ");
	scanf(" %c",&operation);
    switch (operation){
        case '+':
        result = a+b;
	    printf("%f", result);
        break;
        case '-':
        result = a-b;
	    printf("%f", result);
        break;
        case '*':
        result = a*b;
	    printf("%f", result);
        break;
        case '/':
        result = a/b;
	    printf("%f", result);
        break;
        default:
        printf("Enter proper operation");
    }
}