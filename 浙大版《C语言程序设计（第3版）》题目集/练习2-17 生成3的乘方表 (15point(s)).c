#include <stdio.h>
int main()
{
	int n,i,sum=1;
	if(scanf("%d",&n))
	{
		printf("pow(3,0) = 1\n");
		for(i = 1;i<=n;i++)
		{
			sum *= 3;
			printf("pow(3,%d) = %d\n",i,sum);
		}
	}
	return 0;
}
