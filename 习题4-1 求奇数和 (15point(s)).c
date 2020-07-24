#include <stdio.h>
int main()
{
	int n,sum=0;
	while(scanf("%d",&n))
	{
		if(n<=0)
		{
			break;
		}else
		{
			if(n%2!=0)
			{
				sum +=n;	
			}
		}
	}
	printf("%d",sum);
	return 0;	
} 
