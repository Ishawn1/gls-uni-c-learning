#include <stdio.h>
int main(void){
    int i=1,n,fact=1;
    printf("Write n: ");
    scanf("%d",&n);
    while (i<=n){
        fact=fact*i;
        i++;
    }
    printf("\nFactorial using while loop: %d", fact);
    // Reset variables for the next loop
    i = 1;
    fact = 1;

    for (i = 1; i <= n; i++) {
        fact *= i;
    }
    printf("\nFactorial using for loop: %d", fact);

    i = 1;
    fact = 1;

    do {
        fact *= i;
        i++;
    } while (i <= n);
    printf("\nFactorial using do-while loop: %d", fact);
}