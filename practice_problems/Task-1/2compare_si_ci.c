#include <stdio.h>
#include <math.h>
int main(void) {
    double p, r, t,compare;
    printf("Enter principal amount: ");
    scanf("%lf", &p);

    printf("Enter rate of interest : ");
    scanf("%lf", &r);
    printf("Enter time (in years): ");
    scanf("%lf", &t);
    double simpleInterest = (p * r * t) / 100;
    double compoundInterest = p * (pow(1 + r / 100, t)) - p;
    printf("Simple Interest: %lf\n", simpleInterest);
    printf("Compound Interest: %lf\n", compoundInterest);
	compare=compoundInterest-simpleInterest;
	printf("difference: %lf", compare);
}
