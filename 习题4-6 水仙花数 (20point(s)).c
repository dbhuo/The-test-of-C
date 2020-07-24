#include <stdio.h>
/*
pow(x,y)所使用的算法复杂度是o(n),不如常量的好 
*/
int pow(int x,int y)
{
	
}
int main()
{
	int n,i,right = 10,left = 1;
	if(scanf("%d",&n))
	{
		for(i = 1 ; i < n;i++)
		{
			left *= 10;
			right *= 10;
		}
		for(i = left;i<right;i++)
		{
			int temp = i,sum=0;
			while(temp)
			{
				int j,t=temp%10,temp2=1;
				for(j =1;j<=n;j++)
				{
					temp2 *= t;
				}
				sum += temp2;
				temp /= 10;
			}
			if(sum == i)
			{
				printf("%d\n",i);	
			} 
		}
	}
	return 0;
}
