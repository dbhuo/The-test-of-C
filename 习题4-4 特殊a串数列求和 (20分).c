#include <stdio.h>
#include <math.h>
int main()
{
	int a,n,i;
	double sum = 0;
	if(scanf("%d %d",&a,&n))
	{
		double t = a/9.0;
		for(i = 1;i<=n;i++)
		{
			sum += t*(pow(10,i)-1);
		}
		printf("s = %.0f",sum);
	}
	return 0;
} 
