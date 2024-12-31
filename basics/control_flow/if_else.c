#include <stdio.h>
int main(void){
	char letter;
	printf("write letter: ");
	scanf("%c",&letter);
	if(letter == 'a' ||letter == 'e' ||letter == 'i' ||letter == 'o' ||letter == 'u'){
		printf("given letter is a vovel");
	}
	else{
		printf("given letter is a consonet");
	}
}