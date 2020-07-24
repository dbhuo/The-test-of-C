#include <stdio.h>
#include <math.h>

double funcos( double e, double x )
{
	int  i = 2,j, leap = -1;
	double sum = 1 ;
	double item = 1;
	while(fabs(item)>e)
	{
		double temp = 1;
		for(j = 1 ; j <=i;j++)
		{
			temp *= j;
		}
		item = leap*pow(x,i)/temp;
		sum += item;
		leap = -leap;
		i += 2;
	}
	return sum;
} 

int main()
{    
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

    return 0;
}
