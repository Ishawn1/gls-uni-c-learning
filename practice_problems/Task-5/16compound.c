#include <stdio.h>
#include <math.h>
double compound(double p,double r,double t);
int main(void) {
    double p, r, t,compare;
    printf("Enter principal amount: ");
    scanf("%lf", &p);
    printf("Enter rate of interest : ");
    scanf("%lf", &r);
    printf("Enter time (in years): ");
    scanf("%lf", &t);
}
double compound(double p,double r,double t){
    double compoundInterest = p * (pow(1 + r / 100, t)) - p;
    printf("Compound Interest: %lf\n", compoundInterest);
    }