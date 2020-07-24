#include <stdio.h>
#include <math.h>
double hierarchy(double n)
{
	double i;
	double sum=1.0;
	if(n==0)
	{
		sum=1.0;
	}else{
		for(i = 1;i<=n;i++)
		{
			sum *= i;
		}
 	}
 	return sum;
}
int main()
{
	double x,sum=0;
	if(scanf("%lf",&x))
	{
		double t = 0;
		double temp = pow(x,t)/hierarchy(t);
		while(fabs(temp)>=0.00001)
		{
			sum += temp;
			t++;
			temp =pow(x,t)/hierarchy(t);
		} 
		sum += temp;   //���һ��������ѭ����û�ӽ�ȥ�������������һֱ��һ������. 
	}
	printf("%.4f",sum);
	return 0;
}
