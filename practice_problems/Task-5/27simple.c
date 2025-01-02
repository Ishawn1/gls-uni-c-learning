#include <stdio.h>
#include <math.h>
double simple(double p,double r,double t);
int main(void) {
    double p, r, t,compare;
    printf("Enter principal amount: ");
    scanf("%lf", &p);
    printf("Enter rate of interest : ");
    scanf("%lf", &r);
    printf("Enter time (in years): ");
    scanf("%lf", &t);
    printf("%lf",simple(p,r,t));
    }
double simple(double p,double r,double t){
    return p*r*t/100;
}