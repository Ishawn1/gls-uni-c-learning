#include <stdio.h>
int main()
{
	int hr,min,sec,t,sec2,min2,hr2,t2,t3;
	
    printf("Enter time 1:\n");
    scanf("%d %d %d", &hr, &min, &sec);
    printf("Enter time 2:\n");
    scanf("%d %d %d",&hr2, &min2, &sec2);
    t=sec+(min*60)+(hr*3600);
    t2=sec2+(min2*60)+(hr2*3600);
    t3=t+t2;
    hr=t3/3600;
    min=t3%3600;
    min2=min/60;
    sec=min%60;

    printf ("%d hr %d min %d sec", hr, min2,sec);
}