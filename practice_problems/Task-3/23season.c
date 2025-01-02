#include <stdio.h>
int main (void){
    int day;
    printf("which month of the year(1-12): \n");
    scanf("%d", &day);
    switch (day){
        case 3: case 4: case 5: case 6: case 2:
        printf("Summer");
        break;
        case 10:case 11:case 12:case 1:
        printf("Winter");
        break;
        case 7: case 8: case 9:
        printf("Monsoon");
        break;
        default:
        printf("Please enter number between 1-12");
    }
}