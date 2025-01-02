#include <stdio.h>
int main(void){
    char word;
    printf("What is the letter ");
    scanf("%c",&word);
    switch(word){
     case 'a':case 'e':case 'i':case 'o':case 'u':
    printf("Vovel");
    break;
    default:
    printf("consonet");
    }
}
