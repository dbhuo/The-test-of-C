#include <stdio.h>
int main()
{
	int n,i = 1,j = 1,sum = 1,count = 2;
	if(scanf("%d",&n))
	{
		if(n==1)
		{
			count = 1;
		}else{
			while(sum<n)
			{
				sum = i+j;
				i=j;
				j=sum;
				count++;
			}
		}
	printf("%d",count);
	}
	return 0;
}
