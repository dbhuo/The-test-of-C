#include <stdio.h>
#include <math.h>
/*
��ʾ�����Ǳ߽���һ������Ҫ��ϸ�ڣ���ס�����Ǵ�2��ʼ���е� 
*/
int prime(int n)
{
	int i,leap = 1;
	int temp = sqrt(n);
	if(n<2){
		return 0;
	}else{
		for(i = 2;i<=temp;i++)
		{
			if(n%i==0)
			{
				leap = 0;
				break;	
			}	
		} 
	return leap;
	}
}
int main()
{
	int m,n,i,sum=0,count=0;
	if(scanf("%d %d",&m,&n))
	{
		for(i = m;i<=n;i++)
		{
			if(prime(i))
			{
				count++;
				sum+=i;
			}
		}
		printf("%d %d",count,sum);
	}
	return 0;
}
