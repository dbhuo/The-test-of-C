#include <stdio.h>
#include <math.h>
int main()
{
	double sum = 0;
	double eps;
	scanf("%lf",&eps);
	int sign = 1;
	int item = 0;
	double fenmu;
	do{
		fenmu = 3*item+1;
		sum += sign*1/fenmu;
		sign = -sign;
		item++;
	}while(fabs(1/fenmu) > eps);
	printf("sum = %.6f",sum);
	return 0;
}
