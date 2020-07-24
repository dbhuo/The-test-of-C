#include <stdio.h>
int main()
{
	int x,count=0,total,i,j,k;
	if(scanf("%d",&x))
	{
		for(i = x/5;i>0;i--)
		{
			for(j=x/2;j>0;j--)
			{
				for(k=x;k>0;k--)
				{
					if(i*5+j*2+k==x)
					{
					total = i+j+k;
					count++;
					printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n",i,j,k,total);
					}
				}		
			}
		}
		printf("count = %d",count);
	}
	return 0;
}

