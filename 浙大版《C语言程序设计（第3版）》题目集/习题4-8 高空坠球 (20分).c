#include <stdio.h>
/*
提示： 非负整数记得要考虑元素等于0的情况 
*/
int main()
{
	long int hight,n;
	double sum = 0.0;
	if(scanf("%ld %ld",&hight,&n))
	{
		if(n==0)
		{
			printf("0.0 0.0");	
			return 0;
		}
		double t = hight*1.0;
		while(n)
		{
			sum += t;
			sum += t/2.0;
			t /= 2.0;
			n--;
		}
		sum -= t;
		printf("%.1f %.1f",sum,t);
	}
	return 0;
}
