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
		sum += temp;   //最后一项在上述循环中没加进去，导致运算过程一直差一个精度. 
	}
	printf("%.4f",sum);
	return 0;
}
