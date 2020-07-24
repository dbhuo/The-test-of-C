#include <stdio.h>
int main()
{
	int n,i;
	double sum = 0,sym=1;
	if(scanf("%d",&n))
	{
		for(i = 1;i<=n;i++)
		{
			sum += sym*i/(2.0*i-1);
			sym *= -1;
		}
		printf("%.3f",sum);
	}
	return 0;
}
