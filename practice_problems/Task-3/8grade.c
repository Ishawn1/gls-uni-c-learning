#include <stdio.h>
int main (void){
    int mark;
    printf("Marks: \n");
    scanf("%d", &mark);
    mark=mark/10;
    switch (mark)
    {
    case 9: case 10:
    printf("A");
        break;
    case 8: case 7:
    printf("B");
        break;
        case 6: case 5:
    printf("C");
        break;
        case 4: case 3:
    printf("D");
        break;
        case 2: case 1: case 0:
    printf("F");
        break;
    default:
    printf("give mark in percentage");
        break;
    }
}