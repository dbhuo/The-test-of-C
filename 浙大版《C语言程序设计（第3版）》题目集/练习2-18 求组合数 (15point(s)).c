#include <stdio.h>
/*
��ʽ�� ��һ�������ԭ����sumû��ʹ��double�����������ĳ��ȿ��ܱȽϳ� 

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
