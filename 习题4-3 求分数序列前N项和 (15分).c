#include <stdio.h>
int main()
{
	int n;
	double sum = 0;
	if(scanf("%d",&n))
	{
		double element = 2;
		double denominator = 1;
		while(n)
		{
			sum += element/denominator;
			double temp = denominator + element;
			denominator = element;
			element = temp;
			n--;
		}
		printf("%.2f",sum);
	}
	return 0;	
} 
