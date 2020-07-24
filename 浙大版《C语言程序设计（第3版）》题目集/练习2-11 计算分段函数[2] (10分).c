#include <math.h>
#include <stdio.h>
int main()
{
	float x;
	if(scanf("%f",&x))
	{
		if(x>=0)
		{
			printf("f(%.2f) = %.2f",x,sqrt(x));
		}else{
			printf("f(%.2f) = %.2f",x,pow((x+1),2)+2*x+(1/x));
		}
	}
	return 0;

}
