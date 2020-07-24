#include <stdio.h>
int main()
{
	int min,n,i,item;
	if(scanf("%d",&n))
	{
		if(scanf("%d",&item))
		{
			min = item;
		}
		for(i = 2;i<=n;i++)
		{
			if(scanf("%d",&item))
			{
				if(item < min)
				{
					min = item;
				}
			}
		}
		printf("min = %d",min);
	}
	return 0;
}
