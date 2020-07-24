#include <math.h>
#include <stdio.h>
int main()
{
	int n,i;
	double sum = 0.0;
	if(scanf("%d",&n))
	{
	for(i = 1 ; i <=n;i++)
	{
		sum += sqrt(i);
	}
	 printf("sum = %.2f",sum);
	return 0;
	}
 } 
