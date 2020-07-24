#include <stdio.h>
int main()
{
	int c;
	if(scanf("%d",&c))
	{
		int Celsius = (5*(c-32)/9);
		printf("Celsius = %d",Celsius);
	}
	return 0;
} 
