#include <stdio.h>
int main(void){
    char fun;

    printf("Which character ");
    scanf("%c",&fun);
    switch (fun){
        case 48 ... 57:
        printf("Numbers");
        break;
        case 65 ... 90:
        printf("Alphabet Capital");
        break;
        case 97 ... 122:
        printf("Alphabet Lowercase");
        break;
        case 33 ... 46:
        printf("Special Operator");
        break;    
    }
}