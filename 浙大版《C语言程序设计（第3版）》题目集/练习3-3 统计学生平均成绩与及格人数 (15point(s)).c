#include <stdio.h>
/*
��ʽ��ע����Ŀ��һЩ�ӣ���Ŀ��ʾ����Ϊ�Ǹ�������˵��Ҫ����0������� 
*/ 
int main()
{
	int i,n,count = 0,score;
	double sum = 0.0,ave = 0.0;
	if(scanf("%d",&n))
	{
		if(n==0)
		{
			printf("average = %.1f\n",0);
			printf("count = %d",0);	
			return 0;	
		}else{
		for(i = 1;i <= n ;i++)
			{
			if(scanf("%d",&score))
				{
				sum += score;
				if(score >= 60)
					count++;
				}
			}
		}
		ave = sum/n;
		printf("average = %.1f\n",ave);
		printf("count = %d",count);	
	}
	return 0;
}
