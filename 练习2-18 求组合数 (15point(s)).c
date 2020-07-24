#include <stdio.h>
/*
提式： 第一遍做错的原因是sum没有使用double，测试样例的长度可能比较长 

*/
double fact(int n)
{
	int i;
	double sum = 1.0;
	for(i = 1 ; i <= n ; i++)
	sum *= i;
	return sum;
}
int main()
{
	int n,m;
	if(scanf("%d %d",&m,&n))
	{
		double sum ;
		sum = fact(n)/fact(m)/fact(n-m);
		printf("result = %.0f",sum);
	}
	return 0;
}
