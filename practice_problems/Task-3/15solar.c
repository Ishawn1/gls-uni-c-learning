#include <stdio.h>
int main(void){
    int fun;
    printf("Which planet number ");
    scanf("%d",&fun);
    switch (fun){
    case 1:
        printf("Mercury");
        break;
    case 2:
        printf("Venus");
        break;
    case 3:
        printf("Earth");
        break;
    case 4:
        printf("Mars");
        break;
    case 5:
        printf("Jupiter");
        break;
    case 6:
        printf("Saturn");
        break;
    case 7:
        printf("Uranus");
        break;
    case 8:
        printf("Neptune");
        break;
    default:
        break;
    }
}