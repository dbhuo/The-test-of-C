#include <stdio.h>
int main()
{
	int i,n,sym=1;
	double sum = 0;
	if(scanf("%d",&n))
	{
		for(i = 1;i<=n;i++)
		{
			int temp = 3*i -2;
			sum += (sym*1.0/temp);
			sym = sym*(-1);
		}
		printf("sum = %.3f",sum);
	}
	return 0;
 } 
