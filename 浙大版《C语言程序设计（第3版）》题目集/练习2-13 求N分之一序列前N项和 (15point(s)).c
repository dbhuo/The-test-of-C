#include <stdio.h>
int main()
{
	int n,i ;
	double sum = 0;
	if(scanf("%d",&n))
	{
		for(i = 1;i<=n;i++)
		{
			sum += 1.0/i;
		}
		printf("sum = %.6f",sum);
	}
	return 0;
} 
