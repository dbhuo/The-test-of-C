#include <stdio.h>
#include <math.h> 
int main()
{
	double eps,sum=0.0,item = 1.0;
	int denominator=1,flag=1;
	scanf("%lf",&eps);
	do{
		item = 1.0*flag/denominator;
		sum += item;
		flag = -flag;
		denominator = denominator + 3;
	}while(fabs(item)>eps);
	printf("sum = %.6f",sum);
	return 0;
}
