#include <stdio.h>
#include <malloc.h>
int main()
{
	int n;
	int i;
	double item = 0;
	double ave = 0 ;
	double sum = 0 ;
	double max = 0 ; 
	double min = 151 ;
	int *arr;
	scanf("%d",&n);
	arr = (int *)malloc(sizeof(int)*n);
	for(i = 0 ; i < n; i++)
	{
		scanf("%lf",&item);
		if(max<item)
		{
			max = item;
		}
		if(min > item)
		{
			min = item;
		}
		sum += item;
	}
	ave = sum/n;
	printf("average = %.2f\nmax = %.2f\nmin = %.2f",ave,max,min);
	return 0;	
} 
