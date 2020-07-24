#include <stdio.h>

double calc_pow( double x, int n )
{
	if(n==1)
	{
		return x;
	}
	return x*calc_pow(x,n-1);
}

int main()
{
    double x;
    int n;

    scanf("%lf %d", &x, &n);
    printf("%.0f\n", calc_pow(x, n));

    return 0;
}
