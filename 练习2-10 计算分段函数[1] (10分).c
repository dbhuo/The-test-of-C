#include <stdio.h>
int main()
{
	float x ;
	if(scanf("%f",&x))
	{
	  if(x==0)
		{
			printf("f(%.1f) = %.1f",x,0);
		}else{
			printf("f(%.1f) = %.1f",x,1/x);
		}
	}
	return 0;
}
