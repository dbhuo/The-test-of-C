#include <stdio.h>
int main()
{
	int n,i;
	double sum = 0.0,ave = 0.0;
	for(i = 0 ; i <4;i++)
	{
		if(scanf("%d",&n))
		{
			sum += n;
		}
	}
	ave = sum/4.0;
	printf("Sum = %.0f; Average = %.1f",sum,ave);
	return 0;
}
