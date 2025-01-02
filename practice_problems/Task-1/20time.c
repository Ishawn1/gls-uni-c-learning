#include <stdio.h>

int main()
{
	float t,sec,min,hr;
	int hr1,min1,sec1;
    printf("Enter time:\n");
    scanf("%f",&t);
    hr=t/3600;
    hr1=t/3600;
    min=hr-hr1;
    min=min*60;
    min1=min;
    sec=min-min1;
    sec=sec*60;
    sec1=sec;
    printf ("%d hr %d min %d sec", hr1, min1,sec1);
}