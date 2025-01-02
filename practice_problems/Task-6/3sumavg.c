#include<stdio.h>
int main(void)
{
	int n,i;
	float sum=0,average;
	a:
	printf("Enter the number of elements in array : ");
	scanf("%d",&n);
   
	float array[n];

	for(int i=0 ; i<n ; i++)
	{
	  printf("Enter a number : ");
	  scanf("%f",&array[i]);
	}
     for(int j=0 ; j<n ; j++)
     {
       sum = sum + array[j];
     }

	printf("the Sum of the numbers %f\n",sum);
	average = sum / n ;
	printf("the average of the numbers %f\n",average);
}